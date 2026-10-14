#include <iostream>

consteval int square(int x)             // Consteval MUST be run at compile time
{
    return x * x;
}

int main() {
    std::cout << "\n";    

    constexpr int n = 3;   
    std::cout << square(n) << "\n";    // Evaluated at compile time 
     
    /*
    int x;
    std::cout << "Enter a value: ";
    std::cin >> x;
    std::cout << square(x) << "\n";     // COMPILER ERROR: Square cannot evaluate a runtime variable
    */

    std::cout << "\n";
    return 0;
}