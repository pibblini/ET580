#include <iostream>
using namespace std;

int main() {
    cout << endl;

    float grades[4] = {90.3, 85.6, 65.0, 71.3};     // Initialize an array of 4 floats

    cout << grades[0] << " ";                       // 1st index is 0
    cout << grades[1] << " ";                       // 2nd index is 1
    cout << grades[2] << " ";                       // 3rd index is 2
    cout << grades[3] << "\n";                      // 4th index is 3, last index at position size-1

    cout << endl;
    return 0;
}
