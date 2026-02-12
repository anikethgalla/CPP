#include <iostream>
class Entity{
    public:
        float X,Y;
    public:
        Entity(){
            X=0.0f;
            Y=0.0f;
        }

        Entity(float x,float y){
            X=x;
            Y=y;
        }
};

/*class Log{

    public:
        Log()=delete;//deletes the default constructor
    public:
        static void write(const char* message){ std::cout<<message<<std::endl; } };
};*/
int main() {
    Entity e;
    std::cout<<"X: "<<e.X<<" Y: "<<e.Y<<std::endl;
    Entity e2(5.0f,6.0f);
    std::cout<<"X: "<<e2.X<<" Y: "<<e2.Y<<
    std::cin.get();


    //Log::write("Hello");
    //Log l;happens due to default constructor
}