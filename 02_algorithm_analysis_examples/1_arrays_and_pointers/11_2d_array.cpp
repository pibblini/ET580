#include <iostream>

void print(const int a[][3], int s1, int s2)                    // Parameters: array ptr, size of 1st dimension, size of 2nd dimension
{
    for(int i=0; i<s1; ++i) {                                   // 0        1
        for(int j=0; j<s2; ++j) {                               // 0 1 2    0 1 2
            std::cout << a[i][j] << " " << &(a[i][j]) << " "; 
        }   
        std::cout << "\n";                                  
    }
}

int main() 
{
    std::cout << std::endl;

    const int S1 = 2;
    const int S2 = 3;                         
    int nums[S1][S2] = { {10,20,30}, {40,50,60} };              // 2D dimensional array of integers         

    print(nums, S1, S2); 

    std::cout << std::endl;    
    return 0;
}
