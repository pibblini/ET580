#include <iostream>
#include <cassert>

void print(const int *p, int size) 
{
    for(int i=0l; i<size; ++i) { std::cout << p[i] << " ";}
    std::cout << "\n";
}
void insert(int *p, int CAPACITY, int &size, int index, int value) 
{
    assert(index >=0 && index <= size && size < CAPACITY && value > 0);      // Validate index, size and value is positive
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
     
    print(positiveInts, size);

    //insert(positiveInts, CAPACITY, size, 4, 50);              // ERROR: Invalid index
    //insert(positiveInts, CAPACITY, size, 3, -40);             // ERROR: Value is negative

    std::cout << "\n";
    return 0;
}