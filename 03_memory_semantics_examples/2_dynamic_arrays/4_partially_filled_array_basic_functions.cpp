#include <iostream>
#include <cassert>                                          

void print(const int *a, int size)                  
{
    for(int i=0; i<size; ++i) {         
        std::cout << a[i] << " ";       
    }
    std::cout << "\n";
}
void push_back(int *a, int capacity, int &size, int value)  // Pass size by reference 
{ 
    assert(size >=0 && size < capacity);                    // Assert: terminate program if size is invalid  
    a[size] = value;                                        // Store value at the end of the array
    ++size;                                                 // Increment size
}
void pop_back(int &size)                                    // Pass size by reference (size should be modified in main and in pop_back if a value is removed)
{
    assert(size > 0);                                       // Assert: terminate program if array is empty  
    --size;                                                 // Decrement size (the original last value is now garbage)
}

int main() {
    std::cout << std::endl;

    const int CAPACITY = 10;                
    int nums[CAPACITY] = {10,20,30,40,50};  
    int size = 5;                           

    print(nums, size);
    push_back(nums, CAPACITY, size, 60);                    // Size incremented because of pass by reference
    push_back(nums, CAPACITY, size, 70);                    // Size incremented because of pass by reference
    print(nums, size);
    pop_back(size);                                         // Size decremented because of pass by reference                      
    print(nums, size);

    std::cout << std::endl;    
    return 0;
}

