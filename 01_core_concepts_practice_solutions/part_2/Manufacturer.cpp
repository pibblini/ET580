#include "Manufacturer.h"                                   // Include the header file

Manufacturer::Manufacturer(): name("default")               // Member functions require Manufacturer:: scope resolution before function name
{
}
Manufacturer::Manufacturer(const std::string &n):name(n)    // Constructors use member innitialization syntax
{
}
const std::string& Manufacturer::getName() const
{   
    return name; 
}
void Manufacturer::setName(const std::string &b) 
{ 
    name = b; 
}