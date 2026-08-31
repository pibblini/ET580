#include <iostream>

class Shape {
private:                                            // RULE 1: Member variables should be stored in PRIVATE
    int size;                                       // Direct access is prohibited because size is PRIVATE
    void print() { std::cout << size << "\n"; }     // Direct access is prohibited because print() is PRIVATE
public:                         
    std::string name;                               // Direct access is allowed because name is PUBLIC                        
};  

int main() {
    std::cout << std::endl;

    Shape s1;   

    //s1.size = 10;                                 // Compiler error: size is PRIVATE
    s1.name = "Square";   
    
    // s1.print();                                  // Compiler error: print is PRIVATE

    std::cout << std::endl;
    return 0;
}