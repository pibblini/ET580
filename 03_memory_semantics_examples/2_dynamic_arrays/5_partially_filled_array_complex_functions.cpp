#include <iostream>
#include <cassert>

void print(const int *a, int size)                  
{
    for(int i=0; i<size; ++i) {         
        std::cout << a[i] << " ";       
    }
    std::cout << "\n";
}
void insert(int *a, int capacity, int &size, int value, int index)  // insert value at index
{
    assert(size >= 0 && size < capacity);       // Assert: terminate program if size is invalid
    assert(index >= 0 && index <= size);        // Assert: terminate program if index is invalid (note: index can be == size if you want to insert at end)
    for(int i=size; i>index; --i) {             // Iterate from last down to index+1 
        a[i] = a[i-1];                          // Copy previous to current (shift right)
    }
    a[index] = value;                           // Store value at specified index
    ++size;                                     // Increment size                                               
}
void erase(int *a, int &size, int index)        // Erase value at index
{
    assert(index >=0 && index < size);          // Assert: terminate program if index is invalid or array empty (note: index must < size to be valid)
    for(int i=index; i<size-1; ++i) {           // Iterate from index up to second to last value
        a[i] = a[i+1];                          // Copy next to current (left shift)
    }
    --size;                                     // Decrement size 
}

int main() {
    std::cout << std::endl;

    const int CAPACITY = 10;                
    int nums[CAPACITY] = {10,20,30,40,50};  
    int size = 5;                           

    print(nums, size);
    std::cout << "\n";

    erase(nums, size, 0);                       // Erase 10
    print(nums, size);

    insert(nums, CAPACITY, size, 25, 1);        // Insert 25 between 20 and 30
    print(nums, size);

    erase(nums,size, 4);                        // Erase 50
    print(nums, size);

    insert(nums, CAPACITY, size, 60, 4);        // Insert 60 at the end (equivalent to push_back)
    print(nums, size);      

    std::cout << std::endl;    
    return 0;
}

