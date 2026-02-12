#include <iostream>

int main(){
    int a=10;
    int *ptr=&a;
    *ptr=20;
    std::cout<<"Value of a: "<<a<<std::endl;
    std::cin.get();
}