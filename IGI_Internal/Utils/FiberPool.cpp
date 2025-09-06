#pragma once

#include <functional>
#include <thread>
#include <vector>
#include <queue>
#include <mutex>
#include <condition_variable>
#include <atomic>
#include <cstddef>
#include <utility>
#include <chrono>

#ifdef _WIN32
#define NOMINMAX
#include <windows.h>
#endif

class FiberPool {
public:
   explicit FiberPool(std::size_t numThreads = std::thread::hardware_concurrency());
   FiberPool(const FiberPool&) = delete;
   FiberPool& operator=(const FiberPool&) = delete;
   ~FiberPool();

   template <typename F>
   void Run(F&& f);
   template <typename F>
   void run(F&& f);

   template <typename F>
   void RunExternal(F&& f, unsigned preDelayMs = 2, unsigned postDelayMs = 2);

private:
   struct Task {
       std::function<void()> func;
       bool external{ false };
       unsigned preDelayMs{ 0 };
       unsigned postDelayMs{ 0 };
#ifdef _WIN32
       void* return_fiber{ nullptr };
#endif
   };

   std::vector<std::thread> workers;
   std::queue<Task> tasks;
   std::mutex queue_mutex;
   std::condition_variable condition;
   std::atomic<bool> stop_flag{ false };

#ifdef _WIN32
   struct ScopedFiber {
       void* fiber{ nullptr };
       bool converted{ false };
       ScopedFiber() {
           fiber = ConvertThreadToFiber(nullptr);
           if (fiber) {
               converted = true;
           }
           else {
               DWORD err = GetLastError();
               if (err == ERROR_ALREADY_FIBER) {
                   fiber = GetCurrentFiber();
                   converted = false;
               }
           }
       }
       ~ScopedFiber() {
           if (fiber && converted) {
               ConvertFiberToThread();
           }
       }
   };

   static void __stdcall FiberEntry(void* lpParameter) {
       Task* t = static_cast<Task*>(lpParameter);
       if (!t) return;
       if (t->preDelayMs) ::Sleep(t->preDelayMs);
       __try {
           t->func();
       }
       __except (EXCEPTION_EXECUTE_HANDLER) {
           // swallow
       }
       if (t->postDelayMs) ::Sleep(t->postDelayMs);
       if (t->return_fiber) {
           SwitchToFiber(t->return_fiber);
       }
   }

   static void RunExternalTaskSEH(Task& task) {
       if (task.preDelayMs) ::Sleep(task.preDelayMs);
       __try {
           task.func();
       }
       __except (EXCEPTION_EXECUTE_HANDLER) {
           // swallow
       }
       if (task.postDelayMs) ::Sleep(task.postDelayMs);
   }
#endif
};

// Implementation

inline FiberPool::FiberPool(std::size_t numThreads) {
   if (numThreads == 0) {
       numThreads = 1;
   }
   stop_flag.store(false);
   workers.reserve(numThreads);
   for (std::size_t i = 0; i < numThreads; ++i) {
       workers.emplace_back([this]() {
#ifdef _WIN32
           ScopedFiber fiberScope;
           void* workerFiber = fiberScope.fiber;
#else
           void* workerFiber = nullptr;
#endif
           while (true) {
               Task task;
               {
                   std::unique_lock<std::mutex> lock(this->queue_mutex);
                   this->condition.wait(lock, [this]() {
                       return this->stop_flag.load() || !this->tasks.empty();
                       });
                   if (this->stop_flag.load() && this->tasks.empty()) {
                       return;
                   }
                   task = std::move(this->tasks.front());
                   this->tasks.pop();
               }
               if (task.external) {
#ifdef _WIN32
                   if (workerFiber) {
                       auto* heapTask = new Task(std::move(task));
                       heapTask->return_fiber = workerFiber;
                       void* fiber = CreateFiber(0, &FiberPool::FiberEntry, heapTask);
                       if (fiber) {
                           SwitchToFiber(fiber);
                           DeleteFiber(fiber);
                           delete heapTask;
                           continue;
                       }
                       else {
                           delete heapTask;
                       }
                   }
                   RunExternalTaskSEH(task);
#else
                   if (task.preDelayMs) std::this_thread::sleep_for(std::chrono::milliseconds(task.preDelayMs));
                   try { task.func(); }
                   catch (...) {}
                   if (task.postDelayMs) std::this_thread::sleep_for(std::chrono::milliseconds(task.postDelayMs));
#endif
               }
               else {
#ifdef _WIN32
                   task.func();
#else
                   try { task.func(); }
                   catch (...) {}
#endif
               }
           }
           });
   }
}

inline FiberPool::~FiberPool() {
   stop_flag.store(true);
   condition.notify_all();
   for (auto& t : workers) {
       if (t.joinable()) {
           t.join();
       }
   }
}

template <typename F>
void FiberPool::Run(F&& f) {
   Task t;
   t.func = std::forward<F>(f);
   t.external = false;
   {
       std::lock_guard<std::mutex> lock(queue_mutex);
       tasks.emplace(std::move(t));
   }
   condition.notify_one();
}

template <typename F>
void FiberPool::run(F&& f) {
   Run(std::forward<F>(f));
}

template <typename F>
void FiberPool::RunExternal(F&& f, unsigned preDelayMs, unsigned postDelayMs) {
   Task t;
   t.func = std::forward<F>(f);
   t.external = true;
   t.preDelayMs = preDelayMs;
   t.postDelayMs = postDelayMs;
   {
       std::lock_guard<std::mutex> lock(queue_mutex);
       tasks.emplace(std::move(t));
   }
   condition.notify_one();
}
