#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << endl;

    string s = "Hello";                        
    char a[5] = {'A','B','C','D','E'};          

    for(int i=0; i<10; ++i){ cout << a[i]; }    // Logical error: out-of-bounds read access
    cout << "\n";

    for(int i=0; i<10; ++i) { a[i] = 'Z'; }     // Logical error: out-of-bounds write access (buffer overflow)

    for(int i=0; i<10; ++i){ cout << a[i]; }    // Logical error: out-of-bounds read access 
    cout << "\n";    

    cout << s << "\n";                          // s is corrupt

    cout << endl;
    return 0;
}
