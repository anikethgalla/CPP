#include <iostream>


class Base{
public:
    Base() { std::cout << "Base constructor\n"; }
    virtual ~Base() { std::cout << "Base destructor\n"; }
};

class Derived : public Base{
public:
    Derived() { std::cout << "Derived constructor\n"; }
    ~Derived() { std::cout << "Derived destructor\n"; }
};
int main() {
    Base* base = new Base();
    delete base;
    Derived* derived = new Derived();
    delete derived;
    Base* poly = new Derived();
    delete poly;
    std::cin.get();
}