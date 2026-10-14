#ifndef CAR_H
#define CAR_H

#include <string>                           // Include string because of string parameter in parameterized constructor
#include "Manufacturer.h"                   // Include Manufacturer because of Manufacturer member variable

class Car {
private:
    Manufacturer brand;                     // Member variable of type Manufacturer
    int cost;                               // Member variable of type int
public:
    Car();                                  // Default constructor
    Car(const std::string &, int);          // Parameterized constructor
    const std::string& getBrand() const;    // Brand accessor returns the name of the brand (inside the brand object)
    int getCost() const;                    // Cost accessor
    void setBrand(const std::string &);     // Brand mutator assigns the name of the brand (inside the brand object)
    void setCost(int c);                    // Cost mutator
};

#endif