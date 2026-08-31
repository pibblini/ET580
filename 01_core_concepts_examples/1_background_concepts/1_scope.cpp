#include <iostream>
using namespace std;

int i = 0;                      // Global variable

int main() {                        
    cout << endl;

    cout << i << "\n";         // Global i

    int i = 5; 
    cout << i << "\n";         // Local Main i

    {
        int i = 10;
        cout << i << "\n";     // Local Nested i
    }

    for(int i=0; i<10; ++i) {
        cout << i << " ";      // Local For Loop i
    }
    cout << "\n";

    cout << i << "\n";         // Local Main i       

    cout << endl;    
    return 0;
}
