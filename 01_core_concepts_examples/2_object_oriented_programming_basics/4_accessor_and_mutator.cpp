#include <iostream>

class Shape {
private:                    
    int size;                                       // Direct access is prohibited because size is PRIVATE
public:     
    int getSize() { return size; }                  // Accessor function for read only access to member variables
    void setSize(int s) { size = s; }               // Mutator function for modify access to member variables
};

int main() {
    std::cout << std::endl;

    Shape s1;                                  
    // s1.size = 10;                                // Compiler error: size is PRIVATE     
    // std::cout << size << "\n";                   // Compiler error: size is PRIVATE                                       

    s1.setSize(10);                                 // Call the public MUTATOR function   
    std::cout << s1.getSize() << "\n";              // Call the public ACCESSOR function

    std::cout << std::endl;
    return 0;
}