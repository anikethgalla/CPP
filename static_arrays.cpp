#include <iostream>
#include <array>

int main() {
    
    std::array<int,5> myArray={1,2,3,4,5};
    myArray.size(); // returns the size of the array
    myArray.at(2); // returns the element at index 2 (3 in this
    // case)
    myArray.front(); // returns the first element (1 in this case)
    myArray.back(); // returns the last element (5 in this case)
    myArray.fill(0); // fills the array with 0s
    myArray.begin(); // returns an iterator to the first element
    myArray.end(); // returns an iterator to the element following the last element
    
    std::cin.get();
}