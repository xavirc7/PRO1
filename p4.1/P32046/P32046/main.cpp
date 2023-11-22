#include <iostream>
using namespace std;

int main(){
    int n, x, y, cont;
    cont = 0;
    cin >> n;
    cout << "nombres que acaben igual que " << n << ':' << endl;
    x = n % 1000;
    while (cin >> n){
        y = n % 1000;
        if (y == x) {
            cont++;
            cout << n << endl;
        }
    }
    cout << "total: " << cont << endl;
}
