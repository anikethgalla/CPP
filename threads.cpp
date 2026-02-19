#include <iostream>
#include <thread>

static bool s_finsihed =false;
void DoWork(){
    std::cout<<"Starting thread id"<<std::this_thread::get_id()<<std::endl;
   while(!s_finsihed){
       std::cout<<"Working..."<<std::endl;
       std::this_thread::sleep_for(std::chrono::seconds(1));
   }
   std::cout<<"Ending thread id"<<std::this_thread::get_id()<<std::endl;
}

int main() {
    std::thread worker(DoWork);
    std::cin.get();
    s_finsihed=true;
    worker.join();
    std::cout<<"Finished!"<<std::endl;
    std::cin.get();
}