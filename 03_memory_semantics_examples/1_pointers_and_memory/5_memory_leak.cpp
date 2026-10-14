#include <iostream>

int main() 
{
    std::cout << std::endl;

    int *p = new int(1);    // Lifetime of int(1) begins
    p = new int(2);         // Memory leak: int(1) is no longer accessible

                            // Avoid memory leaks by deleting unused memory
    int *q = new int(3);    // Lifetime of int(3) begins
    delete q;               // Lifetime of int(3) ends 
    q = new int(4);         // Q is safely reallocated

                            // Avoid memory leaks by backing up access
    int *r = new int(5);    // Lifetime of int(5) begins
    int *backup = r;        // Backup access to int(5)
    r = new int(6);         // R is safely reallocated

    delete p;               // Lifetime of int(2) ends 
    delete q;               // Lifetime of int(4) ends 
    delete r;               // Lifetime of int(6) ends 
    delete backup;          // Lifetime of int(5) ends

    std::cout << std::endl;
    return 0;  
}
