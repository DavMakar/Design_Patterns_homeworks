#include "Singleton.hpp"
#include <iostream>

std::unique_ptr<Singleton> Singleton::instance_ = nullptr;
std::mutex Singleton::mutex_;

Singleton::Singleton(){
    std::cout<< "ctor" <<std::endl;    
}

Singleton* Singleton::get_instance(){
    mutex_.lock();
    if(instance_ == nullptr){
        instance_ = std::unique_ptr<Singleton>(new Singleton{});
    }
    mutex_.unlock();
    return instance_.get();
}