#include <iostream>
#include <optional>

void print(const int *p, int size) 
{
    for(int i=0l; i<size; ++i) { std::cout << p[i] << " ";}
    std::cout << "\n";
}
std::optional<int> find(const int *p, int size, int value)          // std::optional<X> returns a value of type X if the search is successful
{
    for(int i=0; i<size; ++i) {
        if(p[i] == value) {
            return i;
        }
    }
    return std::nullopt;                                            // Return a nullopt instead of a -1, or an exception, or an assertion
}

int main() {
    std::cout << "\n";

    const int CAPACITY = 10;
    int positiveInts[CAPACITY] = {10,20,30,40,50,60,70,80,90,100};                    
    int size = 10; 

    print(positiveInts, size);

    std::optional<int> result1 = find(positiveInts, size, 55);          // Check the return for an integer or a "nullopt" value
    if(result1.has_value()) {
        std::cout << "Found at index " << result1.value() << "\n";      // .value() returns the index
    } else {
        std::cout << "Not found! " << result1.value_or(-1) << "\n";     // Value_or can be used to specify a default value for failures, in this case -1
    }

    std::optional<int> result2 = find(positiveInts, size, 50);          // Check the return for an integer or a "nullopt" value
    if(result2.has_value()) {
        std::cout << "Found at index  " << result2.value() << "\n";
    } else {
        std::cout << "Not found! \n";
    }

    std::cout << "\n";
    return 0;
}