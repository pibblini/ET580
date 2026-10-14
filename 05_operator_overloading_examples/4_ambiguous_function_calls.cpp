#include <iostream>

int sum(int a, int b)                       // Original sum function
{ 
    return a + b; 
}
double sum(double a, double b)             // Overloaded sum function
{
    return a + b; 
}

int main() {
    std::cout << std::endl;

    //std::cout << sum(4, 5.3) << "\n";     // COMPILER ERROR: Ambigious function call
    //std::cout << sum(4.2, 5) << "\n";     // COMPILER ERROR: Ambigious function call

    std::cout << std::endl;
    return 0;
}//
