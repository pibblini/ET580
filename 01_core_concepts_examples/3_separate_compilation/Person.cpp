#include <iostream>                     // Header files (.h) should include any and all libaries required for the included code to work
#include "Person.h"                                         // Implementation files (.cpp) must include all relevant header files
                                                            // Implementation files (.cpp) define all member functions and can define non-member functions

Person::Person(): name("noname"), age(0)                    // Member function requires a scope resolution prefix before the function name (Person::function)    
{}                     
Person::Person(const std::string &n, const int &a): name(n), age(a) 
{}                                
std::string Person::getName() const
{ 
    return name; 
}      
int Person::getAge() const
{ 
    return age; 
}
void Person::setName(const std::string &n) 
{ 
    name = n; 
}   
void Person::setAge(const int &a) 
{ 
    age = a; 
}   

void print(const Person &p)                                       // Non-member function does not require scope resolution             
{
    std::cout << p.getName() << " " << p.getAge() << "\n";  
}