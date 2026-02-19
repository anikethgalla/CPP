#include <iostream>

#define PR_DEBUG 1

// Conditional logging macro
#if PR_DEBUG == 1
    #define LOG(x) std::cout << x << std::endl
#else
    #define LOG(x)
#endif

// Corrected multi-line macro
#define add(a,b) \
{ \
    std::cout << (a) + (b) << std::endl; \
}

int main() {
    LOG("Hello, World!");
    
    // Testing the add macro
    add(5, 7); 
    
    std::cin.get();
    return 0;
}