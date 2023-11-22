#include <iostream>
using namespace std;


void digit_maxim_i_minim(int n, int& maxim, int& minim) {
    if (n < 10 ) maxim = minim = n;

    else {
        digit_maxim_i_minim(n/10, maxim, minim);
        if (n%10 > maxim) maxim = n%10;
        else if (n%10 < minim) minim = n%10;
    }
}

// int main() {
//     int x;
//     while (cin >> x) {
//       int a, b;
//       digit_maxim_i_minim(x, a, b);
//       cout << x << ' ' << a << ' ' << b << endl;
//     }
// }
