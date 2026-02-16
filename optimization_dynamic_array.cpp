#include <iostream>
#include <vector>
struct Vertex{
    float x,y,z;

    Vertex(float x, float y, float z) : x(x), y(y), z(z) {}

    Vertex(const Vertex& other) : x(other.x), y(other.y), z(other.z) {
        std::cout << "Copy constructor called for Vertex(" << x << ", " << y << ", " << z << ")\n";
    }
};
int main() {
    std::vector<Vertex> vertices;
    //optimzation stratgey 1
    vertices.reserve(3); // Reserving space for 2 vertices to avoid unnecessary copies
    //optimizaiton stretgy 2
    vertices.emplace_back(Vertex(1.0f, 2.0f, 3.0f));
    vertices.emplace_back(Vertex(4.0f, 5.0f, 6.0f));
    std::cin.get();
}


