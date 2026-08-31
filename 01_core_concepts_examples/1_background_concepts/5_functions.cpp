#include <iostream>

void print(int n)                  // Pass by value: int n = i
{
    std::cout << n << "\n";   
}
void increment(int &n)             // Pass by reference: int &n = i
{
    ++n;                           // N and I are modified
}

int main() {
    std::cout << std::endl;

    int i = 5;

    print(i);                       // N = I   
    increment(i);                   // N is assigned the memory address of I
    print(i);                       // I is modified

    std::cout << std::endl;
    return 0;
}
