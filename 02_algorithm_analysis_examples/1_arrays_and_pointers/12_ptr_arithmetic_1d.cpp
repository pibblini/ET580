#include <iostream>

void print(const int *p, const int &size) 
{ 
    for(const int *c = p; c < p + size; ++c) {            // Iterate through the array using pointer arithmetic
        std::cout << *c << " ";    
    }
}

int main() 
{
    std::cout << std::endl;

    const int SIZE = 6;
    int a[SIZE] = {10,20,30,40,50,60};

    std::cout << *(a+0) << " " << (a+0) << "\n";    // First value and memory address
    std::cout << *(a+1) << " " << (a+1) << "\n\n";  // Second value and memory address

    print(a, SIZE);  

    std::cout << std::endl;
    return 0;
}
