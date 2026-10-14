#include <iostream>

class IntPtr {                              // Simple Smart Pointer class for integers
private:
    int *ptr;
public:
    IntPtr(int *p = nullptr) : ptr(p) {}    // Default argument is optional (makes this operator as a Default and Parameterized constructor)
    ~IntPtr() { delete ptr; }               // Destructor to delete dynamic memory

    int& operator*()                        // Overload * (defererence) to return the deferenced value of ptr
    {
        return *ptr;
    }
    const int& operator*() const            // Const version
    {
        return *ptr;
    }    
};

int main() {
    std::cout << "\n";

    IntPtr q;                               // Constructor supports no arguments (default)
    IntPtr p(new int(100));                 // Constructor supports 1 argument (parameterized)                            
    std::cout << *p << "\n";                // Deference to read the value of the variable p points to

    *p = 200;                               // Deference to modify the value of the variable p points to
    std::cout << *p << "\n";   

    std::cout << "\n";
    return 0;
}