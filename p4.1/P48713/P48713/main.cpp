#include <iostream>
using namespace std;

int main(){
    int n, x;
    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> x;
        int j = 2;
        bool primer = x > 1;
        while(primer and j*j <= x){
              if (x % j == 0) primer = false;
            ++j;
        }
        if (primer) cout << x << " is prime" << endl;
        else cout << x << " is not prime" << endl;
    }
}
