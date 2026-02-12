#include <iostream>
int main(){
    int a=10;
    int b=20;
    if(a>b){
        std::cout<< "a is greater than b" << std::endl;
    }
    else if(a<b){
        std::cout<< "a is less than b" << std::endl;
    }
    else{
        std::cout<< "a is equal to b" << std::endl;
    }
}