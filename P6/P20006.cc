#include <iostream>
using namespace std;

int operacion() {
    char c;
    cin >> c;
    if (c >= '0' and c <= '9') return c - '0';
    else {
        int n = operacion();
        int x = operacion();
        if (c == '+') return n + x;
        else if (c == '-') return n - x;
        else return n*x;
    }
}

int main() {
    cout << operacion() << endl;
}
