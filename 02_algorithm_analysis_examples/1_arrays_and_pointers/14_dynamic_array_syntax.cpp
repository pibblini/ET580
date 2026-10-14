#include <iostream>
#include <cassert>

void print(const int *p, int size)                          // Parameters: array ptr, array size  
{
    for(int i=0; i<size; ++i) {                         
        std::cout << p[i] << " ";                       
    }
    std::cout << "\n";
    std::cout << sizeof(p) << " bytes\n\n";                 // Print the amount of memory for the pointer a in bytes
}
void replace(int *p, int size, int index, int newValue)     // Parameters: array ptr, array size, index of value to replace, new value to store at index
{   
    assert(index >= 0 && index < size);                     // If the index is legal continue, otherwise execute a runtime error
    p[index] = newValue;                      
}

int main() 
{
    std::cout << std::endl;

    const int SIZE = 6;                         
    int *nums = new int[SIZE]{10,20,30,40,50,60};           // New operator is required to allocate a dynamic array   

    print(nums, SIZE);
    replace(nums, SIZE, 3, 4000);                           // Replace nums[3] with 4000
    print(nums, SIZE);

    delete [] nums;                                         // Delete operator is required to delete the dynamic array

    std::cout << std::endl;    
    return 0;
}
