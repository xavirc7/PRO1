#include <iostream>
using namespace std;

int main(){
    string s;
    bool p, f;
    p = false;
    f = false;
    int cont = 0;
    while(cin >> s and not f){
        if (s == "principi") p = true;
        else if (s == "final") f = true;
        else if(p and not f) ++cont;
    }
    if(p and f) cout << cont << endl;
    else cout << "sequencia incorrecta" << endl;
}
