#include <iostream>
using namespace std;

int main(){
    char c;
    bool trobat = false;
    cin >> c;
    while(not trobat and c != '.'){
        if(c == 'a') trobat = true;
        cin >> c;
    }
    if (trobat) cout << "yes" << endl;
    else cout << "no" << endl;
}

