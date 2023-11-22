#include <iostream>
using namespace std;

int main() {
    int c, x, i, l, n;
    
    while (cin >> c) {
        x = c;
        l = c;
        
        for (i = 1; i <= c; i++) {
            while (l > 1) {
                cout << " " ;
                l--;
            }
            while (x > 0) {
                cout << 'X';
                x--;
            }
            cout << endl;
            x = c + 2 * i;
            l = c - i;
        }
        x = c + (2 * (c - 1));
        for (i = c - 2; i > 0; i--) {
            while (x > 0) {
                cout << 'X';
                x--;
            }
            cout << endl;
            x = c + (2 * (c - 1));
        }
        n = 0;
        for (i = 1; i <= c; i++) {
            n = i - 1;
            while (n < c and n >= 0) {
                if (n != 0) {
                    cout << ' ';
                }
                n--;
            }
            while (x > 0) {
                cout << 'X';
                x--;
            }
            cout << endl;
            x = c + (2 * (c - 1)) -2 * i;
        }
        cout << endl;
    }
}
