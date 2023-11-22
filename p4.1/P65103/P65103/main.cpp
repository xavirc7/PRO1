#include <iostream>
using namespace std;

int main(){
    int n, x, i;
    bool trobat = false;
    i = 1;
    cin >> n;
    while (not trobat and cin >> x){
        if (i == n) trobat = true;
        ++i;
    }
    if (trobat) cout << "At the position " << n << " there is a(n) " << x << '.' << endl;
    else cout << "Incorrect position." << endl;
}
