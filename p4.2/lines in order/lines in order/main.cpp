#include <iostream>
using namespace std;

int main() {
    int n, r = 0, i = 0;
    string x, s;
    bool continua, acabar = false;
    
    
    while (cin >> n and not acabar) {
        r++;
        continua = true;
        while (n > 0) {
            cin >> x;
            while (continua) {
                cin >> s;
                if (s > x) {
                    x = s;
                    i++;
                }
                else if (s == x) {
                    x = s;
                }
                else if (s < x) {
                    n = 0;
                }
                if (n == 1){
                    if (i == 0) {
                        n--;
                        continua = false;
                    }
                    if (i != 0) {
                        n --;
                        continua = false;
                        acabar = true;
                    }
                }
                else if (n == 0) continua = false;
            }
            
        }
            
    }
    cout << "The first line in ingreasing order is " << r << '.' << endl;
}
