#include <iostream>
using namespace std;

void ordre_invers() {
    string s;

    if (cin >> s) {
        ordre_invers();
        cout << s << endl;
    }
}

int main() {
    ordre_invers();
}
