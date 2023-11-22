#include <iostream>
using namespace std;

int main(){
    int n;
    bool trobat = false;
    cin >> n;
    int cont = 0;
    while (not trobat){
        if (n % 2 == 0) trobat = true;
        ++cont;
        cin >> n;
    }
    cout << cont << endl;
}
