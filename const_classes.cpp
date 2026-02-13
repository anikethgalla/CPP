#include <iostream>
class Entity{
    private:
        int m_X,m_Y;
        
    public:
        int GetX() const{//method is not going to modify the methodd
            return m_X;
        }
        int GetY() const{
            return m_Y;
        }

        void SetX(int x){
            m_X=x;
        }
};


void PrintEntity(Entity e){
    std::cout<<e.GetX()<<","<<e.GetY()<<std::endl;
}
int main() {
    
    std::cin.get();
}