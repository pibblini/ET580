#include <iostream>

class Number {
private:
    double num;
public:
    Number(): Number(0) { }
    Number(double n): num(n) { }
    void output() const { std::cout << num << std::endl; }

    Number& operator+=(const Number &rhs)       // Binary shortcut overload
    {
        num += rhs.num;                         // += in this statement adds a double
        return *this;                           // *this represents the calling object
    }
};

int main() {
    std::cout << std::endl;

    int x=5, y=10;
    std::cout << (x+=y) << "\n";                // Expression resolves to a modified X (X = X + Y)
    std::cout << x << "\n";                     // X is modified
    std::cout << y << "\n\n";                   // Y is not

    Number a(3.5), b(2.0);

    (a+=b).output();                            // A is the calling object, B the parameter object, expression resolves to a modified A

    std::cout << "\n";
    a.output();                                 // A is modified
    b.output();                                 // B is not
    std::cout << "\n";

    std::cout << std::endl;
    return 0;
}
