#include <iostream>

/*
    summation(3, 0) 0+3
        summation(2, 3) 3+2
            summation(1, 5) base case: return 5+1
        summation(2, 3) return 6
    summation(3, 0) return 6
*/
int summation(int n, int sum=0)                 // Tail recursive function: default argument (SUM = 0)
{
    if(n==1) { return sum+1; }                  // Base case: 
                                                //                  compute the final answer

    return summation(n-1, sum+n);               // Recurisve task: 
                                                //                  compute current SUM then pass the answer to the next function call
}

int summationGoto(int n, int sum=0)             // Tail recursion optimization: Iterative equivalent of the tail recursive function using goto
{
    start:                                      // START Label

    // Similar to Base case
    if(n==1) { return sum+1; }                  // End the loop and return the final SUM + 1

    // Similar to Recursive task
    sum += n;                                   // Compute current SUM
    --n;                                        // Decrement N 

    goto start;                                 // Repeat: Jump to START
}

int main() {
    std::cout << std::endl;

    int n = 3;

    std::cout << summation(n) << "\n";          // Compute summation recursively with the default sum argument of 0
    std::cout << summation(n, 10) << "\n\n";    // Compute summation recursively with a specified sum argument of 10

    std::cout << summationGoto(n) << "\n";      // Compute summation iteratively using goto (similar to the compiler assembler method)

    std::cout << std::endl;
    return 0;
}