#include <iostream>
using namespace std;

int main(){
    int f,c;
    char x;
    cin >> f >> c;
    int cont = 0;
    for(int i = 0; i < f;++i){
        for(int j = 0; j < c;++j){
            cin >> x;
            if((i + j) % 2 == 0) cont += x - '0';
        }
    }
    cout << cont << endl;
}
