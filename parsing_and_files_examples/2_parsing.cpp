#include <iostream>
#include <sstream>                                  // Enable Stringstream

int main( ) {
    std::cout << std::endl;

    std::string line = "This,is,a,string";          // Comma delimited text string
    std::string token;                              // Varieble to store each token of data
    std::stringstream parse(line);                  // Connect stringstream to a string

    while( std::getline(parse, token, ',') ) {      // While data remains: read string up until comma and store into token
        std::cout << token << "\n";                 // Print token
    }
                     
    std::cout << std::endl;
    return 0;
}