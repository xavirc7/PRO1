#include <iostream>
using namespace std;

int binary (int x) {
    if (x < 2) return x;
    else return (x % 2) + 10 * binary (x / 2);
}

int hexa (int x) {
    if (x < 16) return x;
    else return (x % 16) + 10 * hexa (x / 16);
}

int octa (int x) {
    if (x < 8) return x;
    else return (x % 8) + 10 * octa (x / 8);
}

int main() {
    int n;
    while (cin >> n) cout << n << " = " << binary (n) << ", " << octa (n) << ", " << endl;
}
