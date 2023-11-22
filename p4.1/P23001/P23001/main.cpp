#include <iostream>
using namespace std;

int main() {
    string first, s;
    int cont, max;
    cont = 0;
    max = 0;
    bool primer = true;
    while(cin >> s){
        if (primer){
            first = s;
            primer = false;
            ++cont;
            if (cont > max) max = cont;
        }
        else{
            if(s == first) {
                ++cont;
                if (cont > max) max = cont;
            }
            else{
                if (cont != 0){
                    if(cont > max) max = cont;
                    cont = 0;
                            }
            }
        }
    }
    cout << max << endl;
}
