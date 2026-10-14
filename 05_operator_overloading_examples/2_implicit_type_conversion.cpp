#include <iostream>

class Number {
public:
    float value;
    Number(): value(0.0){}                      
    Number(float v): value(v){}                 // One parameter constructor supports implicit conversion
};

int sum(float a, float b)                       // Sum two floats
{ 
    return a + b; 
}
void print(Number n)                            // Print an Numbect object
{ 
    std::cout << n.value << "\n"; 
}

int main() {
    std::cout << std::endl;

    std::cout << sum(5, 10) << "\n";            // Implicitly convert integers to floats
    std::cout << sum('A', 'B') << "\n\n";       // Implicitly convert characters to floats  

    Number n{5.3};
    print(n);                                   // Print a Number object
    print(125);                                 // Implicitly convert 125 to a Number object then print it

    std::cout << std::endl;
    return 0;
}//
