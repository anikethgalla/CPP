#include <iostream>

int main() {
    const int a=10; 

    const int* a =new int;
    *a=20;//error
    std::cout<<"Value of a: "<<*a<<std::endl;
    int* const b = new int; 
    *b=30; //valid but cannto change the pointer itself
    std::cout<<"Value of b: "<<*b<<std::endl;
    int const* a=new int; 
    *a=40; //same as const int* a
    std::cout<<"Value of a: "<<*a<<std::endl;
    std::cin.get();
}
