#include <iostream>
#include <fstream>                          // Enable filestream objects

int main( ) {
    std::cout << std::endl;

    std::ifstream file("data_1.csv");       // Open a file in the same directory                 
    std::string line;                          

    while( std::getline(file, line) ) {     // Read line of text from file into the variable line (repeat until out of lines)  
        std::cout << line << "\n";          // Print line
    }

    std::cout << std::endl;
    return 0;
}
