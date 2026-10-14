#ifndef MANUFACTURER_H
#define MANUFACTURER_H

#include <string>                           // Include string because of name member variable

class Manufacturer {
private:
    std::string name;                       // Member variable of type string
public:
    Manufacturer();                         // Default constructor
    Manufacturer(const std::string &n);     // Parameterized constructor (pass string by const ref)
    const std::string& getName() const;     // Name accessor is a const member function (return string by const ref)
    void setName(const std::string &b);     // Name mutator (pass string by const ref)
};

#endif