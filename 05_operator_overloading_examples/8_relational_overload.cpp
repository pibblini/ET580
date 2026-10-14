#include <iostream>

class Number {
private:
    double num;    
public:
    Number(): Number(0) { }
    Number(double n): num(n) { }
    void output() const { std::cout << num << std::endl; }

    bool operator==(const Number &rhs) const                        // Binary relational member overload (one parameter)
    {
        return num == rhs.num;                                      // Return true or false
    }
    friend bool operator>(const Number &lhs, const Number &rhs);    // Declare as a friend function for direct access to private area
};

bool operator>(const Number &lhs, const Number &rhs)                // Binary relational non-member overload (two parameters)
{
    return ( lhs.num > rhs.num );                                   // Friend functions have private access
}

int main() {
    std::cout << std::endl;

    Number a(3.5), b(2.0), c(3.25);

    std::cout << (a==b) << std::endl;       // A is the calling object, B is the parameter object, neither are modified
    std::cout << (a>b) << std::endl;        // A is the first parameter object, B is the second parameter object, neither are modified

    std::cout << "\n";
    a.output();
    b.output();
    c.output();
    std::cout << "\n";

    std::cout << (a==b) << std::endl;       // A==bB compares objects, == operator overload is required    
    std::cout << (&a==&a) << std::endl;     // &a==&a compares memory addresses, == overload is not required

    std::cout << std::endl;
    return 0;
}
