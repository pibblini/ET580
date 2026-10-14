#include <iostream>

int* f1() 
{                 
    int *p; 
    int x = 10;                 // Lifetime of X begins                 
    p = &x;                     // P -> X                  
    return p;                   // Return P
}                               // Lifetime of X ends  

int* f2()                       
{
    int *p = new int(20);       // Lifetime of int(20) begins
    return p;                   // Return P
}

int main() 
{
    std::cout << std::endl;

    int *q = f1();              // What is the problem?
    std::cout << *q << "\n";    

    int *r = new int{10};
    r = f2();                   // What is the problem?  
    std::cout << *r << "\n";                        

    delete r;                   // What was deleted?

    std::cout << std::endl;
    return 0;
}
