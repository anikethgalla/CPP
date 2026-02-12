#include <iostream>

void display(){
    std::cout<< "This is a display function" << std::endl;
}
int main(){
    int a=10;
    int d;
    int b=20;
    int c=a+b;
    d=10;
    a++;
    display();
    std::cout<< c << std::endl;
}