#include <iostream>

void func() {
    int x = 0; 		                    // Automatic variable is initialized every function call
    static int y = 0;                   // Static variables is initialized once
    x++;
    y++;
    std::cout << x << " " << y << "\n";
}                                       // Lifetime of X ends

int main() 
{
    std::cout << std::endl;

    func();
    func();
    func();

    std::cout << std::endl;
    return 0;
}                                       // Lifetime of Y ends
