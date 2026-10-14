#include <iostream>

class Number {
public:
    float value;
    Number(): value(0.0){}                      
    explicit Number(float v): value(v){}        // Explicit keyword prevents implicit conversion of parameters
};

void print(Number n)                            // Print an Numbect object
{ 
    std::cout << n.value << "\n"; 
}

int main() {
    std::cout << std::endl;

    Number n{5.3};
    print(n);                                   // Print a Number object
    //print(125);                               // COMPILER ERROR: Explicit keyword prevents implicit conversin of integer to Number

    std::cout << std::endl;
    return 0;
}//
