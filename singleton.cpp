#include <iostream>
class Singleton {
    private:
        static Singleton* s_Instance;
    public:
        static Singleton& Get() {
            static Singleton instance;
            return instance;
        }

        void Hello(){}
};

int main() {
    Singleton::Get().Hello();
    std::cin.get();
}