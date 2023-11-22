#include <iostream>
using namespace std;

int max (int x, int y, int z, int s) {
    if (x >= y and x >= z and x >=s) return x;
    else if (y > x and y >= z and y >= s) return y;
    else if (z > x and z > y and z >= s) return z;
    else return s;
}

int main() {
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    cout << max(a,b,c,d) << endl;
}
