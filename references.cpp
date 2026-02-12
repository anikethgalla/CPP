#include <iostream>
void increment(int& num){
    num++;
}
int main(){
    int a=10;
    int& ref=a; // ref is a reference to a
    std::cout<<"Value of a: "<<a<<std::endl;
    ref=20; // modifying the value through reference
    std::cout<<"Value of a after modifying reference: "<<a<<std::endl;
    increment(a); // passing a by reference to the function
    std::cout<<"Value of a after incrementing: "<<a<<std::endl;
    std::cin.get();
}