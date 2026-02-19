#include <iostream>
#include <vector>
void ForEach(const std::vector<int>&  values, void(*func)(int)){
    for (int value : values) {
        func(value);
    }
}
int main() {
    std::vector<int> values={1,2,3,4,5};
    std::cin.get();
    ForEach(values,[](int value){std::cout << "Lambda Value: " << value << std::endl;});
    
}