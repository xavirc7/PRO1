#include <iostream>
using namespace std;

int main(){
    cout.setf(ios::fixed);
         cout.precision(10);
    int n,m;
    double h;
    
    while(cin >> n >> m){
        h = 0;
        for(double i = m + 1; i <= n; ++i) h += 1 / i;
        cout << h << endl;
    }
}
