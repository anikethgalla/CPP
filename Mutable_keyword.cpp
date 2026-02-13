#include <iostream>
class Entity{
    private:
        int m_X, m_Y;
        mutable int m_Counter = 0; 
    public:
        void Print() const {
            std::cout << m_X << ", " << m_Y << std::endl;
            m_Counter++; 
        }
}
int main() {
    const Entity e;
    e.Print();

    int x=8;
    auto f = [=]() mutable
    {
        x++;
        std::cout<<x<<std::endl;
    }
    std::cin.get();
}