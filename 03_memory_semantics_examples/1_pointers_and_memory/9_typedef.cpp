#include <iostream>

typedef int* debit;                 // Define a global alias for type int* 
typedef int* credit;                // Define a global alias for type int*

void printLoss(debit d)             // Debit is int*
{                                  
    std::cout << *d << std::endl;
}
void printGain(credit c)            // Credit is int*
{                                  
    std::cout << *c << std::endl;
}

int main() 
{
    std::cout << std::endl;

    debit d = new int(5000);        // D is int*
    credit c = new int(10000);      // C is int*

    printLoss(d);
    printGain(c);

    std::cout << std::endl;
    return 0;
}
