#include <iostream>

class Shape {
private:
    std::string name;
public:
    Shape(): name("Circle"){}   
    void print() const { 
        std::cout << name << "\n"; 
    }
};

int main() 
{
    std::cout << std::endl;

    Shape *s = new Shape();             // Allocate a dynamic object    

    (*s).print();                       // Dereference s to return the shape object, then call print (2 operations)

    s->print();                         // -> is equivalent to * and . combined

    delete s;                           // Deallocate a dynamic object   

    std::cout << std::endl;
    return 0;
}