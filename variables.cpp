#include <iostream>

int main(){
    // int ,unsigned -4bytes
    int variable =10;
    std::cout<< variable << std::endl;
    unsigned int variable1=20;
    std::cout<< variable1 << std::endl;
    variable=30;
    std::cout<< variable << std::endl;

    //char- 1 byte
    char a='A';
    char b=65;
    std::cout<< a << std::endl;
    std::cout<< b << std::endl;

    //float
    float n=5.2f;
    double n1=5.2;
    std::cout<< n << std::endl;
    std::cout<< n1<< std::endl;

    //sizeof
    std::cout<< sizeof(char) << std::endl;
}