#include <iostream>

int f1() 
{
    int x = 10;                     // Lifetime of X begins
    return x;                       // Return a copy of X
}                                   // The lifetime of X ends
int& f2() 
{                      
    int y = 20;                     // Lifetime of Y begins
    return y;
}                                   // Lifetime of Y ends

int main() 
{
    std::cout << std::endl;

    int n = f1();
    std::cout << n << "\n";

    n = f2();                       // What is the problem?
    std::cout << n << "\n";   

    std::cout << std::endl;
    return 0;
}