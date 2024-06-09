#include "logduration.h"

LogDuration::LogDuration(std::string id) : id_(std::move(id))
{

}

LogDuration::~LogDuration() {
    const auto end_time = std::chrono::steady_clock::now();
    const auto dur = end_time - start_time_;
    std::cout << id_ << ": ";
    std::cout << "время выполнения"
              << ": " << std::chrono::duration_cast<std::chrono::milliseconds>(dur).count()
              << " ms" << std::endl;
}
