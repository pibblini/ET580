#include <iostream>

int main() 
{
    std::cout << std::endl;

    int size; 
    std::cout << "Enter size: ";
    std::cin >> size;
    std::cout << "\n";

    int *p = new int[size]{};                           // Size can be decided at runtime

    for(int i=0; i<size; ++i) { 
        std::cout << p[i] << " " << &(p[i]) << "\n";
    }

    delete [] p;                                        // Deallocate the dynamic array 
    std::cout << std::endl;
    return 0;
}
