#include <iostream>

#define SQUARE(x) ((x) * (x))

int main() {
    std::cout << "\n";    

    int n = 3;
    std::cout << SQUARE(++n) << "\n";   // Computed during Preprocessing (before compilation): Incorrectly returns (4 * 5) == 20

    std::cout << "\n";
    return 0;
}