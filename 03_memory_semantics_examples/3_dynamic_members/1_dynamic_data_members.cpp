#include <iostream>

class Shape {
private:
    std::string name;
    int *size;
public:
    Shape(): name("noname"), size( new int(0) )     // Constructor; Initialize automatic memory, allocate and initialize dynamic memory
    {
        std::cout << "CONSTRUCTOR\n";
    }  
    ~Shape()                                        // Destructor: Deallocate dynamic memory 
    {
        std::cout << "DESTRUCTOR\n";
        delete size;                                // Delete the dynamic data member
    } 
};

void func() 
{
    Shape s2;                                               // S2 constructor is called    
}                                                           // S2 destructor is called

int main() 
{
    std::cout << std::endl;

    Shape s1;                                               // S1 constructor is called      
    func();

    std::cout << std::endl;
    return 0;                                               // S1 destructor is called
}
