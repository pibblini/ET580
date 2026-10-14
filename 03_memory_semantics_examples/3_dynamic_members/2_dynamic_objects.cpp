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

    delete s;                           // Deallocate a dynamic object

    std::cout << std::endl;
    return 0;
}

