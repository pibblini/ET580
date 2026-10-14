#include <iostream>

int main() 
{
    std::cout << std::endl;

    int *p = new int(1);        // Lifetime of int(1) begins
    delete p;                   // Lifetime of int(1) ends: P is now a dangling pointer

    p = nullptr;                // P is safe (no longer a dangling pointer)

    std::cout << std::endl;
    return 0;
}
