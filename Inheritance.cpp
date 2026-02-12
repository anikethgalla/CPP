#include <iostream>
class Entity{
    public:
        int X,Y;
        
        void move(int x,int y){ 
            X+=x; Y+=y; 
        }
};

class Player : public Entity{
    public:
        const char* Name;
        void printName()
        { 
            std::cout<<"Player Name: "<<Name<<std::endl; 
        }
};
int main() {
    Player player;
    std::cout<<"Size of Entity: "<<sizeof(Entity)<<std::endl; 
    std::cout<<"Size of Player: "<<sizeof(Player)<<std::endl;
    player.Name="Aniketh";
    player.X=0; player.Y=0; 
    player.move(5,6); 
    std::cout<<"X: "<<player.X<<" Y: "<<player.Y<<std::endl; 
    player.printName();
    std::cin.get();
}