#include <iostream>

class Shape {
private:                    
    int size;  
public:     
    Shape(): size(0) {}                             // Default Constructor initializes the object with default values
    Shape(int s): size(s) {}                        // Parameterized Constructor initializes the object with specified values
    int getSize() { return size; }                  
    void setSize(int s) { size = s; }                
};

int main() {
    std::cout << std::endl;

    Shape s1{};                                     // Call the default constructor                                                             
    std::cout << s1.getSize() << "\n";

    Shape s2{20};                                   // Call the parameterized constructor with a specified value                                                
    std::cout << s2.getSize() << "\n";    

    std::cout << std::endl;
    return 0;
}