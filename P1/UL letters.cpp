#include <iostream>
using namespace std;

int main() {
    char x;
    cin >> x;
    if (x >= 'A' and x <= 'Z') x += ('a'-'A');
    else if (x >= 'a' and x <= 'z') x -= ('a'-'A');
    
    cout << x << endl;
}
