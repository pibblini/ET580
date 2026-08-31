#include <iostream>

class Shape {                       
private:                    
    int size;                           // Member variables 
public:     
    Shape(): size(0) {}                 // Member functions              
    Shape(const int &s): size(s) {}                        
    int getSize() const { return size; }                
    void setSize(const int &s) { size = s; }                
};

// Non-member functions
void print(const Shape &s)              // Pass objects by const reference (read) or reference (modify) 
{
    std::cout << s.getSize() << "\n";   // Call Accessor or Mutator functions to read or modify objects
}

int main() {
    std::cout << std::endl;

    Shape s1;                                                          
    s1.setSize(1000);                   // Use dot operator for member functions
    print(s1);                          // Use parameter objects for non-member functions

    std::cout << std::endl;
    return 0;
}