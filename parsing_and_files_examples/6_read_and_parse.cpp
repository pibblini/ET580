#include <iostream>
#include <fstream> 
#include <sstream>

int main( ) {
    std::cout << std::endl;

    std::ifstream file("data_2.csv");                                   
    std::string line;

    while( getline(file, line) ) {                      // Read line from file into variable line   
        std::string token;                          
        std::stringstream parser(line);                 // Wrap stringstream object around line  

        while( std::getline(parser, token, ',') ) {     // Extract comma delimited tokens
            std::cout << token << "\n";                 // Print tokens
        }
    }

    file.close();                                   

    std::cout << std::endl;
    return 0;
}
