#include <iostream>
using namespace std;

int main() {
    cout << endl;

    const int SIZE = 5;                                 // Constant for size

    int a[SIZE];                                        // Array of garbage
    int b[SIZE]{};                                      // Array of 0's (default values)
    int c[SIZE]{1, 2, 3, 4, 5};                         // Array of known values
    int d[SIZE]{1,2};                                   // Partially filled array of values     

    for(int i=0; i<SIZE; ++i){ cout << a[i] << " "; }
    cout << "\n";
    
    for(int i=0; i<SIZE; ++i){ cout << b[i] << " "; }
    cout << "\n";

    for(int i=0; i<SIZE; ++i){ cout << c[i] << " "; }
    cout << "\n";

    for(int i=0; i<SIZE; ++i){ cout << d[i] << " "; }
    cout << "\n";        

    cout << endl;
    return 0;
}
