#include <iostream>
using namespace std;


int engrosa(int x) {
    if (x < 10) return x;
    int y = engrosa(x/10);
    if (x%10 > y%10) return y*10 + x%10;
    else return y*10 + y%10;
}


// int main() {
//   int x;
//   while (cin >> x) cout << engrosa(x) << endl;
// }
