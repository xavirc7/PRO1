#include <iostream>
using namespace std;

int main(){
    int n, x, r;
    r = 0;
    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> x;
        r += x;
    }
    cout << r << endl;
}
