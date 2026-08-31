#include <iostream>

int main() {
    std::cout << "\n";

    int i = 5;
    std::cout << i << " " << &i << "\n";        // AddressOf operator (&) returns the memory address of a variable

    int &r = i;                                 // R is a reference for I
    std::cout << i << " " << r << "\n";         // R == I

    std::cout << &i << " " << &r << "\n";       // memory addres of R == memory address of I

    std::cout << "\n";    
    return 0;
}

