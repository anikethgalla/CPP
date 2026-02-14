#include <iostream>
#include <string>
#include <memory>

class Entity {
private:
    std::string m_Name;

public:
    Entity() : m_Name("Unknown") {
        std::cout << "Created Entity with no name" << std::endl;
    }

    Entity(const std::string& name) : m_Name(name) {
        std::cout << "Created Entity with name: " << m_Name << std::endl;
    }

    ~Entity() {
        std::cout << "Destroyed Entity with name: " << m_Name << std::endl;
    }
};

int main() {
    std::unique_ptr<Entity> entity = std::make_unique<Entity>("John");

    std::shared_ptr<Entity> entity2 = std::make_shared<Entity>("Jane");

    std::shared_ptr<Entity> e0;
    {
        std::shared_ptr<Entity> e1 = std::make_shared<Entity>("Alice");
        std::weak_ptr<Entity> w0 = e1;   // weak ref (does NOT increase ref count)
        e0 = e1;                         // shared ownership
    }   // e1 goes out of scope, but object is still alive because e0 holds it

    std::cin.get();   // objects destroyed when main ends
}
