#ifndef SINGLETON_PATTERN_HPP
#define SINGLETON_PATTERN_HPP

#include <memory>
#include <mutex>

class Singleton
{
public:
    static Singleton* get_instance();

    Singleton(const Singleton&) = delete;
    Singleton& operator=(const Singleton&) = delete; 

private:
    Singleton();
    static std::unique_ptr<Singleton> instance_;
    static std::mutex mutex_;
};

#endif //SINGLETON_PATTERN_HPP