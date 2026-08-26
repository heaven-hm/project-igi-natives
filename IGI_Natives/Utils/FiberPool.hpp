#pragma once
#include "../Utils/Logger.hpp"
#include <functional>
#include <mutex>
#include <queue>
#include <vector>
#include <atomic>
#include <condition_variable>

/**
 * FiberPool - IGI-Specific Task Scheduler
 * 
 * This is a specialized task scheduler optimized for IGI (2000) game architecture.
 * It's designed to work with IGI's event-based Windows Message loop system rather 
 * than modern game engine loops.
 * 
 * Key Features:
 * - Frame-based delay system optimized for IGI's rendering pipeline
 * - Thread-safe task queuing for cross-thread operations
 * - Integration with IGI's TextPrint HUD hook for game loop execution
 * 
 * Usage: Called from TextPrintDetour() hook which runs every frame
 * For modern games, use FiberPoolEx.hpp instead.
 */
class FiberPool {
public:
  static FiberPool &Instance() {
    static FiberPool inst;
    return inst;
  }

  // Schedule a function to execute on the main thread
  // pre_delay_frames = frames to wait before execution
  void RunExternal(std::function<void()> fn, int pre_delay_frames = 0) {
    if (!m_accepting.load()) return;
    std::lock_guard<std::mutex> lock(m_mutex);
    if (!m_accepting.load()) return;
    m_queue.push({std::move(fn), pre_delay_frames});
  }

  void Shutdown() {
    {
      std::lock_guard<std::mutex> lock(m_mutex);
      m_accepting.store(false);
      std::queue<Task> empty;
      m_queue.swap(empty);
    }
    m_state_cv.notify_all();
    std::unique_lock<std::mutex> lock(m_mutex);
    m_state_cv.wait(lock, [this] { return !m_running_pending; });
  }

  // Run pending tasks on the main thread; call this every frame
  void RunPending() {
    std::vector<Task> to_execute;

    {
      std::lock_guard<std::mutex> lock(m_mutex);
      if (!m_accepting.load()) return;
      m_running_pending = true;
      std::queue<Task> new_queue;

      while (!m_queue.empty()) {
        auto task = std::move(m_queue.front());
        m_queue.pop();

        // Decrement pre-delay if >0
        if (task.pre_delay_frames > 0) {
          task.pre_delay_frames--;
        }

        // Decide if task is ready to run or needs to wait more
        if (task.pre_delay_frames <= 0) {
          to_execute.push_back(std::move(task)); // move only once
        } else {
          new_queue.push(std::move(task)); // move only once
        }
      }

      m_queue = std::move(new_queue);
    }

    // Execute ready tasks outside the lock
    for (auto &task : to_execute) {
      try {
        task.fn();
      } catch (const std::exception &ex) {
        IGI::LOG_INFO("Exception in game task: %s", ex.what());
      } catch (...) {
        IGI::LOG_INFO("Unknown exception in game task");
      }
    }

    {
      std::lock_guard<std::mutex> lock(m_mutex);
      m_running_pending = false;
    }
    m_state_cv.notify_all();
  }

private:
  struct Task {
    std::function<void()> fn;
    int pre_delay_frames;
  };

  std::queue<Task> m_queue;
  std::mutex m_mutex;
  std::condition_variable m_state_cv;
  std::atomic_bool m_accepting{true};
  bool m_running_pending{false};
};
