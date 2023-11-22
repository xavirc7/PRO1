#include <iostream>
using namespace std;

int main () {
    int n, x, c1, c2, l;
    cin >> n;
    x = n;
    l = 1;
    c1 = 1;
    c2 = 1;
    
    while (x >= 1) {
        while (c1 < x) {
            cout << '+';
            c1++;
        }
        c1 = 1;
        cout << '/';
        while (c2 < l) {
            cout << '*';
            c2++;
        }
        c2 = 1;
        l++;
        x--;
        cout << endl;
    }
}
    
