#include <iostream>
#include <string>

template<typename T>
void Print(T value){
    std::cout << "Value: " << value << std::endl;
}


int main() {
    Print<int>(42);
    Print(5);
    Print<std::string>("Hello, Templates!");
    std::cin.get();
}