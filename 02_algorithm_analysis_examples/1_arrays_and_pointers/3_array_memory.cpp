#include <iostream>
using namespace std;

int main() {
    cout << endl;

    const int SIZE = 5;                 // Use a constant for the array size
    int a[SIZE]{1,2,3,4,5};

    cout << a << "\n";                  // Memory address of the array
    cout << a[0] << "\n";               // Memory address of the first value

    for(int i=0; i<SIZE; ++i) {         // Iterate through the array
        cout << a[i] << " ";            // Print array values
        cout << &(a[i]) << "\n";        // Print memory addresses (contiguous block of data)
    }

    cout << endl;
    return 0;
}