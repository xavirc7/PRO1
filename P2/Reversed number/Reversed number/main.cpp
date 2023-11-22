#include <iostream>
using namespace std;

int main() {
    int x, i;
    cin >> x;
    i = x;
    
    if (x >= 10)
        while (i >= 1) {
        cout << i % 10;
        i = i / 10;
    }
    else if (x < 10) cout << x;
    cout << endl;
}

