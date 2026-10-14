#include <iostream>
#include <vector>

int main() {

    size_t test = 0;
    std::cout << test << "\n";
    --test;
    std::cout << test << "\n\n";                        // The value test wraps to the MAXIMUM_SIZE for a size_t variable

    std::vector<int> nums = {10, 20, 30};
    int count = 0;
    for (size_t i=std::size(nums)-1; i >= 0; --i) {     // Why would this repeat endlessly?
        std::cout << nums[i] << " ";

        ++count;
        if(count == 20) { break; }                      // Count is used to stop the loop from repeating forever          
    }  
    
    std::cout << "\n\n";    

    return 0;
}