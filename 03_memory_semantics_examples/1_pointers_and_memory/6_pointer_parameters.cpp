#include <iostream>

void f1(int *i)                     // Pass a pointer
{              
    *i = 10;                        
}
void f2(int &i)                     // Pass a reference
{
    i = 100;
}
void f3(int *&i)                    // Pass a reference to a pointer
{              
    delete i;                       // Lifetime of int(1) ends
    i = new int(1000);              // Lifetime of int(1000) begins
}

int main() 
{
    int *p = new int{1};            // Lifetime of int(1) begins)

    f1(p);                          // Change value of int(1)
    std::cout << *p << std::endl;

    f2(*p);                         // Change value of int(1)
    std::cout << *p << std::endl;

    f3(p);                          // Change value of P
    std::cout << *p << std::endl;  

    delete p;                       // Lifetime of int(1000) ends

    std::cout << std::endl;
    return 0;
}
