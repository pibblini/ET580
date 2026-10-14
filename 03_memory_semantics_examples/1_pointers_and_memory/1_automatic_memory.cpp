#include <iostream>

void func() {
    int x = 42;                     // Lifetime of x begins
}                                   // Lifetime of x ends

int main() 
{
    std::cout << std::endl;

    func();

    //std::cout << x << "\n";       // ERROR: X no longer exists AND is no longer in scope

    int y = 42;

    std::cout << std::endl;
    return 0;
}                                   // Lifetime of x ends
