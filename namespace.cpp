#include <iostream>
#include <string>
#include <algorithm>

namespace apple{
    namespace functions{
            void print(const std::string& str) {
                std::cout << "This is namespace of: " << str << std::endl;
            }
    }
    
}

namespace orange{
    void print(const std::string& str) {
        std::cout << "This is namespace of: " << str << std::endl;
    }
}

int main() {

    namespace a = apple::functions;

    a::print("apple");
    orange::print("orange");
    
    std::cin.get();
}