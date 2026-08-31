#include <iostream>

struct Shape {                                          
    int size;                                   // Member variable
    void print() { std::cout << size << "\n";}  // Member function                              
};

int main() {
    std::cout << std::endl;

    Shape s1;                                   // Instantiate (allocate memory and initialize) an object of type Shape                    
    s1.size = 10;                               // Directly modify a member variable of object s1 using the dot access operator                       

    Shape s2;                                   // Instantiate a second object of type Shape with its own distinct memory space                                  
    s2.size = 20;                               // Directly modify a member variable of object s2 using the dot access operator         

    s1.print();                                 // Call a member function of object s1 using the dot access operator
    s2.print();                                 // Call a member function of object s2 using the dot access operator  

    std::cout << std::endl;
    return 0;
}