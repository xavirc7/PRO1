#include <iostream>
using namespace std;

int main() {
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    
    if ((a == c) and (b == d)) cout << '=' << " , " << '[' << a << ',' << b << ']' << endl;
    else if (b < c or d < a) cout << "? , []" << endl;
    else if ((a >= c and b < d) or (a > c and b <= d)) cout << '1' << " , " << '[' << a << ',' << b << ']' << endl;
    else if ((a <= c and b > d) or (a < c and b >= d)) cout << '2' << " , " << '[' << c << ',' << d << ']' << endl;
    else if (a < c and b < d) cout << '?' << " , " << '[' << c << ',' << b << ']' << endl;
    else if (a > c and b > d) cout << '?' << " , " << '[' << a << ',' << d << ']' << endl;
    
}
    
