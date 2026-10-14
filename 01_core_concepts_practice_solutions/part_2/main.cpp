#include <iostream>                                                 // Include iostream for cout
#include "Manufacturer.h"                                           // Include Manufacturer
#include "Car.h"                                                    // Include Car

int main() {
    std::cout << std::endl;
    
    // Test Manufacturer
    Manufacturer m1;                                                // Test default constructor
    Manufacturer m2{"Tesla"};                                       // Test parameterized constructor
    m1.setName("BMW");                                              // Test mutator  
    std::cout << m1.getName() << "\n";                              // Test accesor
    std::cout << m2.getName() << "\n";                              // Test accesor    

    // Test Car
    Car c1;                                                         // Test default constructor
    Car c2{"Audi", 65000};                                          // Test default constructor    
    c1.setBrand("Lexus");                                           // Test mutators
    c1.setCost(75000);                                           
    std::cout << c1.getBrand() << " " << c1.getCost() << "\n";      // Test accessors
    std::cout << c2.getBrand() << " " << c2.getCost() << "\n";      // Test accessors

    std::cout << std::endl;
    return 0;
}