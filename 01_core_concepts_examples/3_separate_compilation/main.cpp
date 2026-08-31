#include <iostream>                                             // Driver program must include all requisite libraries
#include "Person.h"

int main()                                                      // Driver program must test all class behaviors
{
    std::cout << std::endl;  

    Person p1;                                                  // Test default constructor
    p1.setName("John");                                         // Test mutators
    p1.setAge(32);

    std::cout << p1.getName() << " " << p1.getAge() << "\n";    // Test accessors

    Person p2{"Jane", 25};                                      // Test parameterized constructor

    print(p2);                                                  // Test print
    
    std::cout << std::endl;
    return 0;
}