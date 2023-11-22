#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;
    
    if (x >= 2)
        while (x >= 1) {
            cout << x % 2;
            x = x/2;
        }
    else if (x < 2) cout << x;
    cout << endl;
}
