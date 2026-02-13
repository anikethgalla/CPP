#include <iostream>
class Entity{
    private:
        int m_Value;
    public:
        Entity(int value)
            :m_Value(value){};
        ~Entity(){
            std::cout<<"Destroyed Entity with value: "<<m_Value<<std::endl;
        }
};
class ScopedPointer{
    private:
        Entity* m_Ptr;
    public:
        ScopedPointer(Entity* ptr) : m_Ptr(ptr) {}
        ~ScopedPointer() {delete m_Ptr;}
};
int main() {
    ScopedPointer ptr=new Entity(5);
    std::cout<<"Scoped Pointer created"<<std::endl;
    std::cin.get();
}
