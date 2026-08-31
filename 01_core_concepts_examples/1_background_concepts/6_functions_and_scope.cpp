#include <iostream>

int x = 0;                          // Global variable

void print(int a)              
{
    std::cout << a << "\n";         // Local scope a         
    std::cout << x << "\n\n";       // Global scope x 

    //std::cout << i << "\n\n";     // Compiler error: I is not in scope                               
}
void increment(int &b)
{
    ++b;    
    std::cout << b << "\n";         // Local scope b   
    std::cout << x << "\n\n";       // Global scope x 
    
    //std::cout << i << "\n\n";     // Compiler error: I is not in scope     
}

int main() {
    std::cout << std::endl;

    int i = 0;             
    std::cout << i << "\n";         // Local scope i  
    std::cout << x << "\n\n";       // Global scope x  

    print(i);
    increment(i);

    //std::cout << a << "\n\n";     // Compiler error: A is not in scope     
    //std::cout << b << "\n\n";     // Compiler error: B is not in scope         

    std::cout << std::endl;
    return 0;
}
