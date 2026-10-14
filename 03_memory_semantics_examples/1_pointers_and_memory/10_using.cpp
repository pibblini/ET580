#include <iostream>

using debit = int*;                 // More modern syntax for typedef: using x = type
using credit = int*;                // More modern syntax for typedef: using x = type

void printLoss(debit d)            
{                                  
    std::cout << *d << std::endl;
}
void printGain(credit c)            
{                                  
    std::cout << *c << std::endl;
}

int main() 
{
    std::cout << std::endl;

    debit d = new int(5000);       
    credit c = new int(10000);    

    printLoss(d);
    printGain(c);

    std::cout << std::endl;
    return 0;
}
