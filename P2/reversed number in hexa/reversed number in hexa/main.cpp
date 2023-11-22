#include <iostream>
using namespace std;

int main() {
    int x, i, r;
    cin >> x;
    i = x;
    r = 0;
    
    if (x >= 1)
        while (i >= 1) {
            r = i % 16;
            if (r == 10) cout << 'A';
            else if (r == 11) cout << 'B';
            else if (r == 12) cout << 'C';
            else if (r == 13) cout << 'D';
            else if (r == 14) cout << 'E';
            else if (r == 15) cout << 'F';
            else cout << r;
            i = i / 16;
        }
    else if ((x < 1)) cout << x;
    cout << endl;
}
