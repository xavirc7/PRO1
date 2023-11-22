#include <iostream>
using namespace std;

int main() {
    cout.setf(ios::fixed);
    cout.precision(2);
    double n, a, b, y, z;
    cin >> n;
    a = 1 / (n - 1);
    b = 1 / (n * (n - 1));
    y = 0;
    z = 0;
    
    while (n > 0) {
        double x;
        cin >> x;
        y += x * x;
        z += x;
        n--;
    }
    
    cout << a * y - b * z * z << endl;
}
