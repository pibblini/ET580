#include <iostream>

int sum(int a, int b)                   // Original sum function
{ 
    return a + b; 
}
double sum(double a, double b)          // Overloaded sum function with different parameter list
{
    return a + b; 
}
int sum(int a, int b, int c)            // Overloaded sum function with different parameter list
{ 
    return a + b + c; 
}

int main() {
    std::cout << std::endl;

    std::cout << sum(4, 5) << "\n";     // Call the first sum function
    std::cout << sum(4.5, 5.3) << "\n"; // Call the second sum function
    std::cout << sum(4, 5, 6) << "\n";  // Call the third sum function

    std::cout << std::endl;
    return 0;
}//
