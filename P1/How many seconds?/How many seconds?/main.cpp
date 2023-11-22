#include <iostream>
using namespace std;

int main() {
    int y, d, h, m, s, t;
    cin >> y >> d >> h >> m >> s;
    t = y*31536000 + d*86400 + h*3600 + m*60 + s;
    cout << t << endl;
}
