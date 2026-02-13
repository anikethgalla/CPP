#include <iostream>
class Entity{
    private:
        std::string m_Name;
    public:
        Entity() : m_Name("Unknown"){}
        Entity(const std::string& name): m_Name(name) {}

        const std::string& GetName() const{ return m_Name;}
};
int main() {
    int a=2;
    int * b= new int[50];

    Entity* e = new(b) Entity();
    Entity* e = (Entity*)malloc(sizeof(Entity));//may call the constructor;
    free(e);
    e=nullptr;//to avoid memory leak
    delete e;
    delete[] b;
    std::cin.get();
}