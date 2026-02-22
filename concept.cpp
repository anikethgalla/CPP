#include <iostream>
#include <type_traits>

int main() {
    // is_integral checks if the type is a whole number (int, char, bool, etc.)
    bool check1 = std::is_integral<1>::value;       // True
    bool check2 = std::is_integral<float>::value;     // False
    bool check3 = std::is_pointer<int*>::value;       // True
    
    std::cout << "Is int integral? " << check1 << "\n";
}