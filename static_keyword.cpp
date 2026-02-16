#include <iostream>
struct Entity{
    static int x,y;

    static void print(){
        std::cout << x << ", " << y << std::endl;
    }
};

int Entity::x=5;
int Entity::y=8;
int main() {
    Entity e1;
    Entity::x=10;
    Entity::y=15;
    Entity e2;
    Entity::print();
    Entity::print();
    std::cin.get();
}