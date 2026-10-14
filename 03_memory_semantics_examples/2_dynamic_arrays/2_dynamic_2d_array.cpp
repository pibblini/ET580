#include <iostream>

int main() 
{
    std::cout << std::endl;

    int rows = 2, cols = 3;                          
    int *p = new int[rows * cols] {1, 2, 3, 4, 5, 6};   // Allocate and initialize a flat 2D dynamic array

    for(int i=0; i<rows; ++i) {
        for(int j=0; j<cols; ++j) {
            std::cout << p[i * cols + j] << " ";        // First row index are 0 1 2, second row index are 3 4 5  (row major order)  
        }
        std::cout << "\n";
    }    

    delete [] p;                                        // Deallocate a flat 2D dynamic array

    std::cout << std::endl;
    return 0;
}
