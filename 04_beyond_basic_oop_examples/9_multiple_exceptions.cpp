#include <iostream>
#include <stdexcept>

void print(const int *p, int size) 
{
    for(int i=0l; i<size; ++i) { std::cout << p[i] << " ";}
    std::cout << "\n";
}
// Note: this is an easy to understand example for understand expressions, it is a poor example of WHEN to use exceptions
void insert(int *p, int CAPACITY, int &size, int index, int value) 
{
    if(value <= 0) {                                                // Multiple exceptions can be thrown for different problems
        throw std::invalid_argument("Values must be positive");     
    }
    if(size >= CAPACITY) {
        throw std::length_error("Array is full");                   
    }
    if(index < 0 || index > size) {
        throw std::out_of_range("Index out of bounds");
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
    } catch (const std::exception &e) {                         // Catch block to catch all errors of type std::exception with similar outcomes
        std::cerr << "ERROR " << e.what() << "\n";
    }

    try {
        insert(positiveInts, CAPACITY, size, 3, -40);           // Invalid value
    } catch (const std::invalid_argument &e) {                  // Multiple catch blocks for each error with different outcomes
        std::cerr << "Invalid Argument: " << e.what() << "\n";
    } catch (const std::length_error &e) {
        std::cerr << "Length Error: " << e.what() << "\n";
    } catch (const std::out_of_range &e) {
        std::cerr << "Out of Range: " << e.what() << "\n";
    }    

    print(positiveInts, size);

    std::cout << "\n";
    return 0;
}