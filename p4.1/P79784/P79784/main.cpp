#include <iostream>
using namespace std;

int main() {
    char c;
    int x, y;
    x = 0;
    y = 0;
    while (cin >> c){
        if (c == 'e') ++x;
        else if (c == 'o') --x;
        else if (c == 's') ++y;
        else if (c == 'n') --y;
    }
    cout << '(' << x << ", " << y << ')' << endl;
    
}
