#include <iostream>
#include <stdexcept>                                                    // Required to use exceptions

void print(const int *p, int size) 
{
    for(int i=0l; i<size; ++i) { std::cout << p[i] << " ";}
    std::cout << "\n";
}
// Note: this is an easy to understand example for understand expressions, it is a poor example of WHEN to use exceptions
void insert(int *p, int CAPACITY, int &size, int index, int value) 
{
    if(value <= 0 || size >= CAPACITY || index < 0 || index > size) {   // Throw a exception instead of using an assertion
        throw std::exception();                                         // Throw an exception to a matching catch block
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
    int positiveInts[CAPACITY] = {10,20,30};                // Array of positive values
    int size = 3;

    try {                                                   // Try block encases the problem code
        insert(positiveInts, CAPACITY, size, 4, 50);        // Invalid index will throw an exception
    } catch (std::exception &e) {                           // Catch block defines the behavior once an exception is thrown
        std::cerr << "Insert Error " << e.what() << "\n";
    }  

    print(positiveInts, size);

    std::cout << "\n";
    return 0;
}