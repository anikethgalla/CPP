#include <iostream>
class Enitity{
    public:
    int x,y;
    Enitity(int x,int y){
        this->x=x;
        this->y=y;
        PrintEntity(*this);
        

        //delete this;//do not fucking do this
    }
};

void PrintEntity(const Enitity& e){
    std::cout<< e.x << " " << e.y << std::endl;
}
int main() {
    
    std::cin.get();
}