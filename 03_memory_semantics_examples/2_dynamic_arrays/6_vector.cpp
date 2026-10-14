#include <iostream>
#include <vector>

void print(const std::vector<int>& nums) 
{
    for (int n : nums) {                                    // Range-based for loop for containers
        std::cout << n << " ";
    }
    std::cout << "\n\n";
}

int main() {
    std::vector<int> nums;                                  // Allocate a vector

    nums.reserve(5);                                        // Specify an initial capacity to best match your expected memory usage

    std::cout << "Size: " << nums.size() << "\n";           // Print the amount of data in the vector
    std::cout << "Capacity: " << nums.capacity() << "\n";   // Print the amount of allocated memory for the vector

    nums.push_back(88);                                     // Add data to the end of the vector
    nums.push_back(95);
    nums.push_back(72);
    nums.push_back(100);
    nums.push_back(64);
    nums.push_back(32);                                     // This function call will 'grow' the vector to store more then 5 values                                 
    nums.push_back(28);                                       
    nums.push_back(40);                                     

    print(nums); 

    std::cout << "First: " << nums.at(0) << "\n";           // Safe way to access the vector (checks boundaries)
    std::cout << "Second: " << nums[1] << "\n";             // Unsafe way to access the vector

    print(nums);

    nums.pop_back();                                        // Remove the last value in the vector
    nums.pop_back();
    std::cout << "Size: " << nums.size() << "\n";
    std::cout << "Capacity: " << nums.capacity() << "\n";

    print(nums);

    return 0;
}