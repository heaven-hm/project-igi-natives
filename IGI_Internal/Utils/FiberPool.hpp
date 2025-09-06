#pragma once
#include <queue>
#include <mutex>
#include <thread>
#include <chrono>
#include <functional>
#include <vector>

class FiberPool {
public:
    static FiberPool& Instance() {
        static FiberPool inst;
        return inst;
    }

    // schedule a task with pre/post delay
    void RunExternal(std::function<void()> fn, int preDelayMs = 0, int postDelayMs = 0) {
        std::lock_guard<std::mutex> lock(m_mutex);
        m_queue.push({ std::move(fn), preDelayMs, postDelayMs });
    }

    // flush tasks from the queue (must be called in main loop)
    void RunPending() {
        std::vector<Task> toExecute;

        {
            std::lock_guard<std::mutex> lock(m_mutex);
            while (!m_queue.empty()) {
                toExecute.push_back(m_queue.front());
                m_queue.pop();
            }
        }

        // execute each task safely on main thread
        for (auto& task : toExecute) {
            if (task.preDelay > 0)
                std::this_thread::sleep_for(std::chrono::milliseconds(task.preDelay));

            try {
                task.fn(); // execute actual game method
            }
            catch (const std::exception& ex) {
                LOG_INFO("Exception in game task: %s", ex.what());
            }

            if (task.postDelay > 0)
                std::this_thread::sleep_for(std::chrono::milliseconds(task.postDelay));
        }
    }

private:
    struct Task {
        std::function<void()> fn;
        int preDelay;
        int postDelay;
    };

    std::queue<Task> m_queue;
    std::mutex m_mutex;
};
