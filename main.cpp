#include <thread>
#include "Singleton.hpp"


void crateInstance(){
    Singleton::get_instance();
}

int main(){   
    std::thread th1(crateInstance);
    std::thread th2(crateInstance);

    th1.join();
    th2.join();
}