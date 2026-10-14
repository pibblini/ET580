#include <iostream>
#include <fstream>                                  // Enable Filestream

int main( ) {
    std::cout << std::endl;

    std::ofstream file("blank.csv");                // Open a file in the same directory 

    for(int i=1; i<=3; i++) {
        file << "Line " << i << " some text.\n";    // Write a line of text three times
    }

    std::cout << std::endl;
    return 0;
}
