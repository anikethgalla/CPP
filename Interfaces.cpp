#include <iostream>

class Printable{
    public:
    virtual std::string GetClassName()=0;
};
class Entity: public Printable{
    public:
    virtual std::string GetName(){
        return "Entity";
    }
    std::string GetClassName() override{
        return "Entity";
    }

};

class Player :public Entity{
    private:
        std::string m_Name;
    public:
    Player(const  std::string& name): m_Name(name){}

    std::string GetName() override{
        return m_Name;
    }
    std::string GetClassName() override{
        return "Player";
    }
};

void PrintName(Printable* obj){
    std::cout<<"Class Name: "<<obj->GetClassName()<<std::endl;
}
int main() {
    Entity* e =new Entity();
    std::cout<<e->GetName()<<std::endl;
    PrintName(e);

    Player* p=new Player("Aniketh");
    std::cout<<p->GetName()<<std::endl;
    PrintName(p);

    Entity* entity=p;
    std::cout<<entity->GetName()<<std::endl;
    std::cin.get();
}