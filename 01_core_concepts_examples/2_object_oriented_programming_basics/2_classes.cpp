#include <iostream>

class Shape {
public:                                             // Classes: Direct access to class members require a PUBLIC access modifier
    int size;
    void print() { std::cout << size << "\n";}                               
};

int main() {
    std::cout << std::endl;

    Shape s1;                                  
    s1.size = 10;                                                 

    Shape s2;                                  
    s2.size = 20;     

    s1.print();    
    s2.print();  

    std::cout << std::endl;
    return 0;
}