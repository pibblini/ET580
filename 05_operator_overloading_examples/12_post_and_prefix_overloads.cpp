#include <iostream>

class Number {
private:
    int num;    
public:
    Number(): num(0) {}
    Number(int i): num(i) {}
    Number(const Number &other): num(other.num) {}  // Copy constructor

    Number& operator++()                            // Prefix overload ++c  
    {
        ++num;                                      // Modify the calling object
        return *this;                               // Return the modified calling object
    }

    Number operator++(int)                          // Postfix overload c++ 
    {
        Number temp = *this;                        // Make a copy of the calling object (calls the copy constructor)
        ++(*this);                                  // Call the prefix overload function to increment the calling object
        return temp;                                // Return the copy (not incremented)
    }

    friend std::ostream& operator<<(std::ostream& out, const Number &c);
};

std::ostream& operator<<(std::ostream& out, const Number &c) 
{
    out << c.num;
    return out;
}

int main() {
    std::cout << std::endl;

    Number n(5);
    std::cout << "n:    " << n << std::endl;
    std::cout << "n++:  " << n++ << std::endl;  // Postfix increment: std::cout << n then n=n+1
    std::cout << "n:    " << n << std::endl;
    std::cout << "++n:  " << ++n << std::endl;  // Prefix increment: n=n+1 then std::cout << n

    std::cout << std::endl;
    return 0;
}