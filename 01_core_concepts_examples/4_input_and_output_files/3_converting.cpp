#include <iostream>
#include <sstream>

int main( ) {
    std::cout << std::endl;

    std::string temp, line = "5,5.05,A";  
    std::stringstream parse(line);                  // Wrap stringstream to the string

    std::getline(parse, temp, ',');                 // Read up until 1st comma and store into temp
    int i = stoi(temp);                             // Convert temp data into an integer then store as a float

    std::getline(parse, temp, ',');                 // Read up until 2nd comma and store into temp
    float f = stof(temp);                           // Convert temp data into a float then store as a float

    std::getline(parse, temp, ',');                 // Read up until end of string and store into temp
    char c = temp[0];                               // Copy first (and only) character of temp into a character variable

    std::cout << i << " " << f << " " << c << "\n";
                                     
    std::cout << std::endl;
    return 0;
}
