#include <iostream>
#include <string>

class Entity
{
    private:
        std::string m_Name;
        int m_Age;
    public:
        Entity(const std::string& name)
            : m_Name(name),m_Age(-1){};
        explicit Entity(int age)
            :m_Name("Unknown"),m_Age(age){};

};

void PrintEntity(const Entity& entity){
    //Printing
}
int main() {
    //PrintEntity(22);//this will give an error because of explicit keyword
    PrintEntity(std::string("Cherno"));//only allwoed to do one implicit covnersion here it converts form a char array to astring to entity but if we try to do both it will give an error because of ambiguity
    Entity a = std::string("Cherno");
    Entity b=Entity(22);
    std::cin.get();
}