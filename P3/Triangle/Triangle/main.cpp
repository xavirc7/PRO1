#include <iostream>
using namespace std;

int main() {
    int n, x, c, l;
    cin >> n;
    x = n;
    c = 0;
    l = 1;
    
    while (x >= 1) {
        while (c < l) {
            cout << '*' ;
            c++;
        }
        c = 0;
        l++;
        cout << endl;
        x--;
    }
}
