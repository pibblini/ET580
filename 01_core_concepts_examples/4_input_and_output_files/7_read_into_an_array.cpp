#include <iostream>
#include <fstream>                                      
#include <sstream>                                      

void print(const int *a, const int &size)            
{
    for(int i=0; i<size; ++i) {
        std::cout << a[i] << " ";
    }
}
void push_back(int *a, const int &capacity, int &size, const int &value)
{ 
    if(size == capacity) { return; }             
    a[size] = value;                    
    ++size;                             
}

int main( ) {
    std::cout << std::endl;

    const int CAPACITY = 100;                       // Partially filled array of integers
    int a[CAPACITY];
    int size = 0; 

    std::ifstream file("data_1.csv");                                      
    std::string line;   

    while( std::getline(file, line) ) {             // Read line of text from file into the variable line (repeat until out of lines)              
        std::string token;                                       
        std::stringstream parser(line);             // Connect stringstream object to line (used to parse tokens)                          

        while( std::getline(parser, token, ',') ) { // Extract token separated by commas from line (repeat until out of tokens) 
            int num = stoi(token);                  // Convert token into integer
            push_back( a, CAPACITY, size, num );    // Store integer into array
        }
    }

    file.close();                                           

    print(a, size);                                 // Print the array

    std::cout << std::endl;
    return 0;
}
