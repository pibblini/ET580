#include <iostream>

int main() 
{
    std::cout << std::endl;

    int x = 5;                      // Lifetime of X begins
    int *p = new int(10);           // The lifetime of the dynamic variable pointed to by P begins

    delete p;                       // The lifetime of the dynamic variable pointed to by P ends

    std::cout << std::endl;
    return 0;
}                                   // Lifetime of X ends
