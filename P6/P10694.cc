#include <iostream>
using namespace std;

void rec(int n){
    if(n == 1) cout << '*' << endl;
    else{
        rec(n - 1);
        rec(n - 1);
        for(int i = 0; i < n; ++i){
            cout << '*';
        }
        cout << endl;
    }
}

int main(){
    int n;
    cin >> n;
    rec(n);
}
