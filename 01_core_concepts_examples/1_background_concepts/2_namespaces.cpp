#include <iostream>
using namespace std;                    // STD is the Global Namespace

namespace et575                         // et575 namespace
{
    int x = 5;                          // Integer X is ONLY accessible within the et575 namespace
}

namespace et580                         // et570 namespace
{
    char x = 'X';                       // Character X is ONLY accessible within the et580 namespace
}

int main() 
{
    cout << endl;

    {
        using namespace et575;          // ET575 code block
        cout << x << endl;              // Print et575 x
        cout << et580::x << endl;       // Print et580 x
    }
    {
        using namespace et580;          // ET580 code block
        cout << x << endl;              // Print x from et580
        cout << et575::x << endl;       // Print x from et575
    }

    cout << et575::x << endl;           // Print x from et575 (scope resolution operator ::)
    cout << et580::x << endl;           // Print x from et580 (scope resolution operator ::)

    cout << endl;
    return 0;
}
