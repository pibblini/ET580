#include <iostream>

class Number {
private:
    double num;   
public:
    Number(): Number(0) { }
    Number(double n): num(n) { }
    double getNumber() const { return num; }                        // Required for non-member overload    
    void output() const { std::cout << num << std::endl; }

    Number operator+(const Number &rhs) const                      // Binary arithmetic member overload
    {
        return Number(num + rhs.num);                               // Return a new object that is the "sum" of the calling and parameter object
    }

    friend Number operator*(const Number &lhs, const Number &rhs) ; // Declare as a friend function for direct access to private area
};

Number operator*(const Number &lhs, const Number &rhs)              // Binary arithmetic non-member overload 
{
    return Number(lhs.num * rhs.num);                               // Return a new object that is the "sum" of the parameter objects (requires accessors)
}

int main() {
    std::cout << std::endl;

    int x=5, y=10;
    std::cout << (x+y) << "\n";                             // Neither X nor Y is modified, a new value is returned
    std::cout << x << "\n";                                 
    std::cout << y << "\n";                                 
    std::cout << (x+y+x+x) << "\n\n";                       // Operator chaining: neither X nor Y is modified, a new value is returned
    
    Number a(3.5), b(2.0);

    (a+b).output();                                         // A is the calling object, B the parameter object, expression resolves to a new Number object
    (a+b+a+b).output();                                     // Operator chaining: resolve one operation at a time
    std::cout << "\n";
    a.output();
    b.output();
    std::cout << "\n";

    (a*b).output();                                         // A is the first parameter object, B is the second parameter object
    (a*b*a*b).output();                                     // operator chaining    

    std::cout << std::endl;
    return 0;
}
