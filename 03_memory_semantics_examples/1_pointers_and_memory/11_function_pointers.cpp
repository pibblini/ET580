#include <iostream>

int add(int a, int b)                           // Function with two int parameters that returns an int
{
    return a+b;
}
int multiply(int a, int b)                      // Function with two int parameters that returns an int
{ 
    return a*b;
}
void print( int a, int b, int (*f)(int, int) )  // Function pointer parameter
{                                              
    std::cout << f(a,b) << "\n";                // Call the function pointer with arguments a and b
}

int main() 
{
    std::cout << std::endl;

    int (*f)(int, int) = nullptr;               // Create a function pointer for an function that accepts to integers and returns an integer

    f = add;                                    // Point f to add
    std::cout << f(5, 6) << "\n";               // Call add 

    f = multiply;                               // Point f to multiply
    std::cout << f(5, 6) << "\n\n";             // call multiply 

    print(5, 6, add);                           // Print the addition of 5 and 6
    print(5, 6, multiply);                      // Print the multiplication of 5 and 6

    std::cout << std::endl;
    return 0;
}
