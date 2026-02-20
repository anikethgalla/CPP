#include <iostream>
#include <chrono>
#include <thread>
struct Timer{
    std::chrono::time_point<std::chrono::steady_clock> start,end;
    std::chrono::duration<float> duration;
    Timer(){
        auto start =
            std::chrono::steady_clock::now();
    }

    ~Timer(){
        end=std::chrono::steady_clock::now();
        duration = end - start;
        std::cout << "Time taken: " << duration.count() << " seconds" <<
        std::endl;
    }
};
void Function(){
    Timer timer;
    for(int i = 0; i < 100; i++);
}
int main(){
    Function();
    std::cin.get();
}