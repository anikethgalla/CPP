#include <iostream>
struct Vector2{
    float x,y;
};
int main() {
    Vector2* a=new Vector2();
    Vector2* b=a; //copy constructor is not called, just copying the pointer

    std::cin.get();
}