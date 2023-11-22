#include <iostream>
using namespace std;

int main() {
    int n, x, s, i, r;
    cin >> n;
    bool rep;
    
    while (n > 0) {
        cin >> x;
        s = x;
        i = 0;
        rep = true;
        r = 0;
        
        while (rep and cin >> x) {
            if (x == 0) rep = false;
            else if (x - s == 1) {
                i = i + 1 + r;
                s = x;
                r = 0;
            }
            else if (x == s) r++;
            else s = x;
        }
        cout << i << endl;
        n--;
    }
}
