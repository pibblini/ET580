#include <iostream>

int main() 
{
    std::cout << std::endl;

    int x = 10; 
    int y = 20;

    int *p = &x;                // P points to x
    std::cout << *p << "\n";    // Dereference p to read from x
    
    *p = 100;                   // Dereference p to write to x
    std::cout << *p << "\n";  

    p = &y;                     // P points to y
    std::cout << *p << "\n";    // Dereference p to read from y

    p = nullptr;                // P points to nullptr, safely pointing the pointer to nothing
    //std::cout << *p << "\n";  // ERROR: cannot derefence nothing

    if( p == nullptr ) {        // Test if p points to nullptr
        std::cout << "P points to nullptr\n";
    }

    std::cout << std::endl;
    return 0;
}
