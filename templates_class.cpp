#include <iostream>
#include <string>

template<typename T,int N>
class Array{
    private:
        T m_Array[N];
    public:
        int GetSize() const {return N;}
};
int main() {
    Array<int,5> myArray;
    Array<std::string,3> stringArray;
    std::cout << "Array size: " << myArray.GetSize() << std::endl;
    std::cout << "String array size: " << stringArray.GetSize() << std::endl;
    std::cin.get();
}