#include <iostream>

void print(const int *p, int size)              // Parameters: array ptr, array size  
{
    for(int i=0; i<size; ++i) {                         
        std::cout << p[i] << " ";                       
    }
    std::cout << "\n";
    std::cout << sizeof(p) << " bytes\n\n";     // Print the amount of memory for the pointer p in bytes
}

int main() 
{
    std::cout << std::endl;

    const int SIZE = 6;                         
    int nums[SIZE] = {10,20,30,40,50,60};          

    std::cout << sizeof(nums) << " bytes\n";    // Print the amount of memory for array a in bytes               
    print(nums, SIZE);

    std::cout << std::endl;    
    return 0;
}
