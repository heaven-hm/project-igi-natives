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

/**
 * FiberPoolEx - Generic Modern Game Engine Task Scheduler
 * 
 * This is a generic, high-performance fiber pool implementation designed for 
 * modern game engines with standard game loops. It provides advanced features
 * like multi-threading, fiber switching, and exception handling.
 * 
 * Key Features:
 * - Multi-threaded task execution with worker threads
 * - Windows fiber support for advanced task switching
 * - SEH (Structured Exception Handling) for robust error handling
 * - Configurable delay system with millisecond precision
 * - Thread-safe task queuing and execution
 * 
 * Usage: For modern games with standard game loops
 * For IGI (2000) specific tasks, use FiberPool.hpp instead.
 */
class FiberPoolEx {
public:

static FiberPoolEx &Instance() {
    static FiberPoolEx inst;
    return inst;
  }

   explicit FiberPoolEx(std::size_t numThreads = std::thread::hardware_concurrency());
   FiberPoolEx(const FiberPoolEx&) = delete;
   FiberPoolEx& operator=(const FiberPoolEx&) = delete;
   ~FiberPoolEx();

   template <typename F>
   void Run(F&& f);
   template <typename F>
   void run(F&& f);

   template <typename F>
   void RunExternal(F&& f, unsigned delayMs = 2);

private:
   struct Task {
       std::function<void()> func;
       bool external{ false };
       unsigned delayMs{ 0 };
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
       if (t->delayMs) ::Sleep(t->delayMs);
       __try {
           t->func();
       }
       __except (EXCEPTION_EXECUTE_HANDLER) {
           // swallow
       }
       if (t->return_fiber) {
           SwitchToFiber(t->return_fiber);
       }
   }

   static void RunExternalTaskSEH(Task& task) {
       if (task.delayMs) ::Sleep(task.delayMs);
       __try {
           task.func();
       }
       __except (EXCEPTION_EXECUTE_HANDLER) {
           // swallow
       }
   }
#endif
};

// Implementation

inline FiberPoolEx::FiberPoolEx(std::size_t numThreads) {
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
                       void* fiber = CreateFiber(0, &FiberPoolEx::FiberEntry, heapTask);
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
                   if (task.delayMs) std::this_thread::sleep_for(std::chrono::milliseconds(task.delayMs));
                   try { task.func(); }
                   catch (...) {}
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

inline FiberPoolEx::~FiberPoolEx() {
   stop_flag.store(true);
   condition.notify_all();
   for (auto& t : workers) {
       if (t.joinable()) {
           t.join();
       }
   }
}

template <typename F>
void FiberPoolEx::Run(F&& f) {
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
void FiberPoolEx::run(F&& f) {
   Run(std::forward<F>(f));
}

template <typename F>
void FiberPoolEx::RunExternal(F&& f, unsigned delayMs) {
   Task t;
   t.func = std::forward<F>(f);
   t.external = true;
   t.delayMs = delayMs;
   {
       std::lock_guard<std::mutex> lock(queue_mutex);
       tasks.emplace(std::move(t));
   }
   condition.notify_one();
}
