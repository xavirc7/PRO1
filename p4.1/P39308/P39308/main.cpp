#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    while (cin >> n){
        
        if(n != 1){
            cout << "divisors of " << n << ": 1";
            for(int i = 2; i*i < n; ++i){
                if(n % i == 0) cout << ' ' << i;
            }
            for (int z = sqrt(n); z > 1 ; --z) {
                if (n%z == 0) cout << ' ' << n/z;
            }
            cout << ' ' << n << endl;
        }
        else cout << "divisors of " << n << ": 1" << endl;
        
    }
}
