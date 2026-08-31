#include <iostream>

class Shape {
private:                    
    int size;  
public:     
    Shape(): size(0) {}                             // Default Constructor initializes the previously allocated memory of a Shape object
    int getSize() { return size; }                  // Accessor 
    void setSize(int s) { size = s; }               // Mutator 
};

int main() {
    std::cout << std::endl;

    Shape s1;                                       // Call the Default Constructor function to initialize the memory of object s1                                                                  
    std::cout << s1.getSize() << "\n";

    Shape s2{};                                     // Call the Default Constructor using brace syntax (alternate syntax) 
    std::cout << s1.getSize() << "\n";    

    std::cout << std::endl;
    return 0;
}