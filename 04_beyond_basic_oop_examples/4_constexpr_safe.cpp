#include <iostream>

constexpr int square(int x)
{
    return x * x;
}

int main() {
    std::cout << "\n";    

    int n = 3;
    std::cout << square(++n) << "\n";   // Computed at Compile Time: Correctly evaluates to (4 * 4) == 16

    std::cout << "\n";
    return 0;
}