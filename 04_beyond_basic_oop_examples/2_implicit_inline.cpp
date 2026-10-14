#include <iostream>

class Shape {
private:
    int size;
public:
    int getSize() const { return size; }    // Functions defined internally are implicitly inline
    void setSize(int s);
};
void Shape::setSize(int s)                  // Functions defined externally are implicitly out-of-line
{ 
    size = s; 
}

int main() {
    std::cout << "\n";

    Shape s1;
    s1.setSize(10);
    std::cout << s1.getSize() << "\n";      // s1.getSize() is replaced with s1.size

    std::cout << "\n";
    return 0;
}