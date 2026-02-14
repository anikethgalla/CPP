#include <iostream>
#include <memory>
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
int main() {
    std::unique_ptr<Entity> Entity = std::make_unique<Entity>("Aniketh");
    std::cout << Entity->m_Name << std::endl;    
    std::cin.get();
}