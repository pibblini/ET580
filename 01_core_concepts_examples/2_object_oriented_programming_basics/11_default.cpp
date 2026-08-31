#include <iostream>

class Circle {                                          // Default constructor is provided coded by the compiler if you do not code one
private:
    int size;             
public:     
    void print() const { std::cout << size << "\n"; }   
};

class Triangle {                                        // Default constructor is NOT provided by the compiler because you coded a parameterized constructor
private:
    int size;             
public:     
    Triangle(const int &s): size(10) {} 
    void print() const { std::cout << size << "\n"; }   
};

class Square {
private:
    int size;             
public:
    Square() = default;                                  // Default keyword instructors the compiler to complete the default constructor for you
    Square(const int &s): size(10) {}                      
    void print() const { std::cout << size << "\n"; }   
};

int main() {
    std::cout << std::endl;

    Circle c;                                           // Run the compiler generated default constructor
    c.print(); 

    // Triangle t;                                      // Compiler error: A default constructor does not exist for class triangle                        
    Triangle t{10};
    t.print();

    Square s;                                           // Run the compiler completed default constructor                         
    s.print();          

    std::cout << std::endl;
    return 0;
}
