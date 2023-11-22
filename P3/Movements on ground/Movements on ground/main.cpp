#include <iostream>
using namespace std;

int main() {
    char c;
    int x, y;
    cin >> c;
    x = 0;
    y = 0;
    
    while (cin >> c) {
        cin >> c;
        if (c == 'n') y++;
        else if (c == 's') y--;
        else if (c == 'e') x++;
        else if (c == 'w') x--;
    }
    cout << '(' << x << ", " << y << ')' << endl;
    cin >> c;
}
