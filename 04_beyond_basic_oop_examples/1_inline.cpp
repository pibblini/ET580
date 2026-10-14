#include <iostream>

inline int add(int a, int b) {          // Functions declared Inline are optimized at compile time
    return a+b;
}

int main() {
    std::cout << "\n";

    int x=1, y=2;
    std::cout << add(x, y) << "\n";     // Function call expression is replaced by (x+y)

    std::cout << "\n";
    return 0;
}