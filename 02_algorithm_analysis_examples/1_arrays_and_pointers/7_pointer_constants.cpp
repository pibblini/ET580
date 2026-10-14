#include <iostream>

int main() 
{
    std::cout << std::endl;

    int x = 10, y = 20;

    // 1. Pointer to a Constant
    const int* p1 = &x;
    //*p1 = 15; 		                    // ERROR: Value CANNOT be modified
    p1 = &y; 		                        // OK: Pointer CAN be redirected

    // 2. Constant Pointer
    int* const p2 = &x;
    *p2 = 15; 		                        // OK: Value CAN be modified
    //p2 = &y; 		                        // ERROR: Pointer CANNOT be redirected

    // 3. Constant Pointer to a Constant
    const int* const p3 = &x;
    //*p3 = 15; 		                    // ERROR: Value CANNOT be modified
    //p3 = &y; 		                        // ERROR: Pointer CANNOT be redirected


    std::cout << std::endl;
    return 0;
}
