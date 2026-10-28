#include <iostream>

class Time {
private:
    int seconds;
public:
    Time(int s=0): seconds(s) {}
};

// Update the time class to support all main function operations

int main() {
    std::cout << std::endl;

    Time t1{100}, t2{300};  
    std::cout << t1 << " " << t2 << "\n\n";

    t1 += t2;
    std::cout << t1 << "\n\n"; 

    Time t3 = t1 + t2;
    std::cout << t3 << "\n";  
    std::cout << -t3 << "\n\n";        

    ++t1;
    t2++;
    std::cout << t1 << " " << t2 << "\n\n"; 

    std::cout << (t1 == t2) << "\n\n"; 

    std::cout << std::endl;
    return 0;
}