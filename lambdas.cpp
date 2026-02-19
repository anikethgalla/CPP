#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

// ============================================
// LAMBDA FUNCTIONS IN C++
// ============================================
// Lambda functions are small, unnamed functions that can be defined inline.
// They are useful for short operations, especially with STL algorithms.
//
// Basic Syntax:
//   [capture_clause](parameters) -> return_type { body }
//
// - capture_clause: How to capture external variables
// - parameters: Function parameters
// - return_type: Optional explicit return type
// - body: Function implementation

int main() {
    
    // ============================================
    // 1. BASIC LAMBDA - No capture, no parameters
    // ============================================
    std::cout << "=== 1. Basic Lambda ===" << std::endl;
    
    auto basicLambda = []() {
        std::cout << "Hello from lambda!" << std::endl;
    };
    basicLambda();  // Call the lambda
    
    
    // ============================================
    // 2. LAMBDA WITH PARAMETERS
    // ============================================
    std::cout << "\n=== 2. Lambda with Parameters ===" << std::endl;
    
    auto add = [](int a, int b) {
        return a + b;
    };
    std::cout << "5 + 3 = " << add(5, 3) << std::endl;
    
    
    // ============================================
    // 3. EXPLICIT RETURN TYPE
    // ============================================
    std::cout << "\n=== 3. Explicit Return Type ===" << std::endl;
    
    auto divide = [](int a, int b) -> double {
        return static_cast<double>(a) / b;
    };
    std::cout << "10 / 4 = " << divide(10, 4) << std::endl;
    
    
    // ============================================
    // 4. CAPTURE BY VALUE [=]
    // ============================================
    std::cout << "\n=== 4. Capture by Value ===" << std::endl;
    
    int x = 10;
    int y = 20;
    
    auto captureByValue = [=]() {
        std::cout << "x = " << x << ", y = " << y << std::endl;
        // Can read x and y, but cannot modify them
    };
    captureByValue();
    
    
    // ============================================
    // 5. CAPTURE BY REFERENCE [&]
    // ============================================
    std::cout << "\n=== 5. Capture by Reference ===" << std::endl;
    
    int counter = 0;
    
    auto increment = [&]() {
        counter++;  // Can modify the original variable
        std::cout << "Counter: " << counter << std::endl;
    };
    
    increment();  // Counter becomes 1
    increment();  // Counter becomes 2
    increment();  // Counter becomes 3
    
    
    // ============================================
    // 6. MIXED CAPTURE [=, &var]
    // ============================================
    std::cout << "\n=== 6. Mixed Capture ===" << std::endl;
    
    int a = 5;
    int b = 10;
    
    auto mixedCapture = [=, &a]() {
        // a is captured by reference, b by value
        a += 5;  // Can modify a
        std::cout << "a = " << a << ", b = " << b << std::endl;
    };
    
    mixedCapture();  // a = 10, b = 10
    std::cout << "After lambda: a = " << a << std::endl;
    
    
    // ============================================
    // 7. LAMBDA WITH VECTORS AND STL ALGORITHMS
    // ============================================
    std::cout << "\n=== 7. Lambda with std::vector ===" << std::endl;
    
    std::vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    // Print all numbers
    std::cout << "Numbers: ";
    std::for_each(numbers.begin(), numbers.end(), [](int n) {
        std::cout << n << " ";
    });
    std::cout << std::endl;
    
    // Count even numbers
    int evenCount = 0;
    std::for_each(numbers.begin(), numbers.end(), [&evenCount](int n) {
        if (n % 2 == 0) {
            evenCount++;
        }
    });
    std::cout << "Even numbers: " << evenCount << std::endl;
    
    
    // ============================================
    // 8. SORTING WITH LAMBDAS
    // ============================================
    std::cout << "\n=== 8. Sorting with Lambda ===" << std::endl;
    
    std::vector<int> data = {5, 2, 8, 1, 9, 3};
    
    // Sort in ascending order
    std::sort(data.begin(), data.end(), [](int a, int b) {
        return a < b;
    });
    
    std::cout << "Sorted (ascending): ";
    for (int num : data) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    
    // Sort in descending order
    std::sort(data.begin(), data.end(), [](int a, int b) {
        return a > b;
    });
    
    std::cout << "Sorted (descending): ";
    for (int num : data) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    
    
    // ============================================
    // 9. LAMBDA WITH FIND_IF
    // ============================================
    std::cout << "\n=== 9. Finding Elements with Lambda ===" << std::endl;
    
    std::vector<int> nums = {10, 20, 30, 40, 50};
    
    // Find first number greater than 25
    auto it = std::find_if(nums.begin(), nums.end(), [](int n) {
        return n > 25;
    });
    
    if (it != nums.end()) {
        std::cout << "First number > 25: " << *it << std::endl;
    }
    
    
    // ============================================
    // 10. LAMBDA WITH TRANSFORM
    // ============================================
    std::cout << "\n=== 10. Transform with Lambda ===" << std::endl;
    
    std::vector<int> original = {1, 2, 3, 4, 5};
    std::vector<int> squared(original.size());
    
    // Square each number
    std::transform(original.begin(), original.end(), 
                   squared.begin(), 
                   [](int n) { return n * n; });
    
    std::cout << "Original: ";
    for (int n : original) std::cout << n << " ";
    std::cout << "\nSquared: ";
    for (int n : squared) std::cout << n << " ";
    std::cout << std::endl;
    
    
    // ============================================
    // 11. MUTABLE LAMBDAS
    // ============================================
    std::cout << "\n=== 11. Mutable Lambda ===" << std::endl;
    
    int value = 10;
    
    auto mutableLambda = [value]() mutable {
        value += 5;  // Can modify captured value (only within lambda)
        std::cout << "Inside lambda: value = " << value << std::endl;
    };
    
    mutableLambda();
    std::cout << "Outside lambda: value = " << value << std::endl;  // Still 10
    
    
    // ============================================
    // 12. GENERIC LAMBDA (C++14)
    // ============================================
    std::cout << "\n=== 12. Generic Lambda ===" << std::endl;
    
    auto genericLambda = [](auto a, auto b) {
        return a + b;
    };
    
    std::cout << "5 + 3 = " << genericLambda(5, 3) << std::endl;
    std::cout << "2.5 + 1.5 = " << genericLambda(2.5, 1.5) << std::endl;
    
    
    // ============================================
    // 13. RETURNING LAMBDA FROM FUNCTION
    // ============================================
    std::cout << "\n=== 13. Returning Lambda ===" << std::endl;
    
    auto makeMultiplier = [](int factor) {
        return [factor](int x) {
            return x * factor;
        };
    };
    
    auto multiplyBy3 = makeMultiplier(3);
    auto multiplyBy5 = makeMultiplier(5);
    
    std::cout << "7 * 3 = " << multiplyBy3(7) << std::endl;
    std::cout << "7 * 5 = " << multiplyBy5(7) << std::endl;
    
    
    // ============================================
    // KEY TAKEAWAYS:
    // ============================================
    // 1. Lambdas are anonymous functions defined inline
    // 2. Use [=] for capture by value, [&] for capture by reference
    // 3. Great for short operations with STL algorithms
    // 4. Can have parameters and return types
    // 5. Use 'mutable' to modify captured variables
    // 6. C++14+ supports generic lambdas with auto parameters
    // ============================================
    
    std::cin.get();
}