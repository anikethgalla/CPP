#include <iostream>

void printHello(int a){
    std::cout << "Hello World!" << a<< std::endl;
}

int main() {

    typedef void(*FunctionPointer)(int) ;
    FunctionPointer function = printHello;
    function(5);
    std::cin.get();
}