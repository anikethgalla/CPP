#include <iostream>
enum Examople:unsigned char
{
    A=5,B,C
};
int main() {
    Examople value=C; 
    if(value==5)std::cout<<"A"<<std::endl; 
    else if(value==6)std::cout<<"B"<<std::endl; else if(value==7)std::cout<<"C"<<std::endl;
    std::cin.get();
}