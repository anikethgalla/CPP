#include <iostream>
#include <vector>
struct Vertex{
    float x,y,z;
};

std::ostream& operator<<(std::ostream& stream, const Vertex& vertex){
    stream<<"Vertex: "<<vertex.x<<","<<vertex.y<<","<<vertex.z;
    return stream;
}
int main() {
    std::vector<Vertex> verticex;
    verticex.push_back({1.0f,2.0f,3.0f});
    for(Vertex v:verticex){
        std::cout<<v<<std::endl;
    }
    std::cin.get();
}