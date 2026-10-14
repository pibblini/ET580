#include <iostream>

void print_2D_Flat(const int *p, int rows, int cols) 
{ 
    const int SIZE = rows * cols;
    for(const int *c = p; c < p + SIZE; ++c) {
        std::cout << *c << " ";
    
        if((c - p + 1) % cols == 0) {       // If c==2 and p==0 then (2-0+1) == 3, 3 is a multiple of cols therefore % cols is true
            std::cout << "\n";              // Jump to the next line to print the second row
        }
     }
}

int main() 
{
    std::cout << std::endl;

    const int ROWS = 2, COLS = 3;
    int a[ROWS][COLS] { {10,20,30},{40,50,60} };   

    print_2D_Flat(&a[0][0], ROWS, COLS);    // Send the memory address of the first value in the 2d array

    std::cout << std::endl;
    return 0;
}
