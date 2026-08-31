#include <iostream>

class Circle {
private:
    int size;
public:
    Circle(): size(0) {}
    Circle(const int &s): size(s) {}
    Circle(const Circle &other) = delete;           // Delete modifier disables this function (Copy constructor CANNOT be called, therefore objects CANNOT be cloned)
    void print() const { std::cout << size << "\n"; }
};

int main() {
    std::cout << std::endl;

    Circle c1{};
    c1.print();

    Circle c2{20};
    c2.print();

    // Circle c3{c1};                               // Compiler error: copy constructor cannot be called
    // Circle c4 = c2;                              // Compiler error: copy constructor cannot be called

    std::cout << std::endl;
    return 0;
}