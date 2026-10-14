#include <iostream>

constexpr int n = 3;                    // Known at Compile Time
constexpr int square(int x)             // Constexpr function can be executed at Compile Time or at RunTime
{
    return x * x;
}

int main() {
    std::cout << "\n";    

    constexpr int RESULT = square(n);   // 1. Known at Compile Time, evaluated at compile time 
    std::cout << RESULT << "\n";     
    
    int x;                              // Not known at Compile Time
    std::cout << "Enter a value: ";
    std::cin >> x;                      // Not known at Compile Time
    std::cout << square(x) << "\n";     // 2. Evaluated at Run Time

    std::cout << "\n";
    return 0;
}