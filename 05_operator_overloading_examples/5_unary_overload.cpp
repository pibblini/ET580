#include <iostream>

class Number {
private:
    double num;
public:
    Number(): Number(0) { }
    Number(double n): num(n) { }
    void output() const { std::cout << num << "\n"; }

    Number operator-() const            // Unary member overload
    {
        return Number(-num);            // Return a negated temporary object
    }
};

int main() {
    std::cout << std::endl;

    int x = 5;
    std::cout << -x << "\n";            // -X calls a negation function
    std::cout << x << "\n\n";           // Integer negation resolves to a negated copy of X (original X does not change)

    Number n(3.25);
    (-n).output();                      // -N calls a negation function, N is the calling object
    n.output();                         // Negation of N resolves to a negated copy of N (original N does not change)

    std::cout << std::endl;
    return 0;
}
