#include <iostream>
using namespace std;

int main(){
    int n, m, x;
    bool primer = true;
    while(cin >> n >> m){
        x = 9;
        if (not primer) cout << endl;
        for(int i = 0; i < n; ++i){
            for(int i = 0; i < m; ++i){
                cout << x;
                if (x == 0) x = 9;
                else --x;
            }
            cout << endl;
        }
        primer = false;
    }
}
