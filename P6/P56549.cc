#include <iostream>
using namespace std;

void cambio_base(int n, int base) {
    if (n < base) cout << n;
    else {
        cambio_base(n/base, base);
        cout << n%base;
    }
}

void escribe(int n) {
    if (n < 10) cout << n;
    else if (n == 10) cout << 'A';
    else if (n == 11) cout << 'B';
    else if (n == 12) cout << 'C';
    else if (n == 13) cout << 'D';
    else if (n == 14) cout << 'E';
    else if (n == 15) cout << 'F';
}

void hexadecimal(int n) {
    if (n < 16) escribe(n);

    else {
        hexadecimal(n/16);
        escribe(n%16);
    }
}

int main() {
    int n;

    while (cin >> n) {
        cout << n << " = ";
        cambio_base(n, 2);
        cout << ", ";
        cambio_base(n, 8);
        cout << ", ";
        hexadecimal(n);
        cout << endl;
    }
}
