#include <iostream>
//#define NDEBUG                                            // Uncomment this to DISABLE assertion checking (when program is ready for distribution)
#include <cassert>                                          // Include <cassert> when using assertions

void print(const int *p, int size) {
    for(int i=0; i<size; ++i) {
        std::cout << p[i] << " ";
    }
    std::cout << "\n";
}
void replace(int *p, int size, int index, int newValue)     // Parameters: array ptr, array size, index of value to replace, new value to store at index
{   
    assert(index >= 0 && index < size);                     // Assertion: Terminate the program with a runtime error if the index is illegal
    p[index] = newValue;                      
}

int main() 
{
    std::cout << std::endl;

    const int SIZE = 5;                      
    int nums[SIZE] = {1,2,3,4,5};

    print(nums, SIZE); 
    replace(nums, SIZE, 3, 4000);                           // Replace nums[3] with 4000
    print(nums, SIZE);
    replace(nums, SIZE, 10, 10000);                         // ERROR: Terminates program with runtime error due to illegal index
    print(nums, SIZE);    

    std::cout << std::endl;
    return 0;
}
