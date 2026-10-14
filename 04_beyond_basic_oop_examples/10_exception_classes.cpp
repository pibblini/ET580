#include <iostream>
#include <string>
#include <stdexcept>

// Note: this is an easy to understand example for understand expressions, it is a poor example of WHEN to use exceptions
class ArrayException : public std::exception                   // Exception class (inherits from std::Exception)
{
private:
    const char* message;                                        // Const character array (legacy version of std::string)
public:
    explicit ArrayException(const char* msg): message(msg) {}   // Explicit constructors cannot automatically cast parameters
    const char* what() const noexcept {                         // Define the what function
        return message;
    }
};

void print(const int *p, int size) 
{
    for(int i=0l; i<size; ++i) { std::cout << p[i] << " ";}
    std::cout << "\n";
}
void insert(int *p, int CAPACITY, int &size, int index, int value) 
{
    if(value <= 0) {
        throw ArrayException("Values must be positive");        // Throw a custom exception
    }
    if(size >= CAPACITY) {
        throw ArrayException("Array is full");
    }
    if(index < 0 || index > size) {
        throw ArrayException("Index out of bounds");
    }                                            
    for(int i=size; i>index; --i) {
        p[i] = p[i-1];
    }
    p[index] = value;
    ++size;
}

int main() {
    std::cout << "\n";

    const int CAPACITY = 10;
    int positiveInts[CAPACITY] = {10,20,30};                    // Array of positive values
    int size = 3;

    try {
        insert(positiveInts, CAPACITY, size, 4, 50);            // Invalid index 
    } catch (const std::exception &e) {                         // Catch the custom exception (and any others) using std::exception
        std::cerr << "ERROR " << e.what() << "\n";
    }

    try {
        insert(positiveInts, CAPACITY, size, 3, -40);           // Invalid value
    } catch (const ArrayException &e) {                         // Catch the custom exception specifically
        std::cerr << "ERROR: " << e.what() << "\n";
    }   

    print(positiveInts, size);

    std::cout << "\n";
    return 0;
}