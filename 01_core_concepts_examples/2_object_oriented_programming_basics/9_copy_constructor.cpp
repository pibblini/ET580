#include <iostream>

class Circle {
private:
    int size;
public:
    Circle(): size(0) {}                                // Default constructor                          
    Circle(const int &s): size(s) {}                           // Parameterized constructor        
    Circle(const Circle &other): size(other.size) {}    // Copy Constructor copies (clones) an object            
    void setSize(const int &s) { size = s; }
    void print() const { std::cout << size << "\n"; }
};

int main() {
    std::cout << std::endl;

    Circle c1{};                                        // Call default constructor
    c1.print();

    Circle c2(10);                                      // Call parameterized constructor
    c2.print();    

    Circle c3{c1};                                      // Call copy constructor to clone c3 from c1
    c3.print();

    Circle c4 = c2;                                     // Call copy constructor to clone c4 from c2
    c4.print();
    std::cout << "\n";

    c1.setSize(100);                                    // Modify c1
    c1.print();                                         // c1 was modified
    c3.print();                                         // c3 is not modified (the memory space of c3 is independent of c1)

    std::cout << std::endl;
    return 0;
}
