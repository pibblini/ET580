#include <iostream>

/*
    array indexes: 0    1    2    3    4    5               // Indexes: 0 to size-1
    array data:    10   20   30   40   50   60              // Memory address of 1st value == memory address of the array
    memory:        3010 3014 3018 301c 3020 3024            // Integer uses 4 bytes of memory
*/
int main() 
{
    std::cout << std::endl;

    const int SIZE = 6;                                     
    int nums[SIZE] = {10,20,30,40,50,60};

    int *p = nums;                                          // Store the base address of the array into the pointer p

    for(int i=0; i<SIZE; ++i) {                             // Print array values and memory using the pointer p
        std::cout << p[i] << " " << &(p[i]) << "\n";
    }
    std::cout << "\n";

    std::cout << sizeof(nums) << " bytes\n";                // Print the amount of memory for the variable num in bytes
    std::cout << sizeof(p) << " bytes\n";                   // Print the amount of memory for the pointer p in bytes

    std::cout << std::endl;    
    return 0;
}
