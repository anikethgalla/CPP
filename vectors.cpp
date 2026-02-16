#include <iostream>
#include <vector>
struct Vertex{
    float x,y,z;
};

std::ostream& operator<<(std::ostream& stream, const Vertex& vertex){
    stream<<"Vertex: "<<vertex.x<<","<<vertex.y<<","<<vertex.z;
    return stream;
}

void Function(std::vector<Vertex>& vertices){
    vertices.push_back({1.0f,2.0f,3.0f});
}
int main() {
    std::vector<Vertex> verticex;
    verticex.push_back({1.0f,2.0f,3.0f});
    for(Vertex& v:verticex){
        std::cout<<v<<std::endl;
    }
    verticex.clear();
    verticex.erase(verticex.begin()+1);

    std::cin.get();
}