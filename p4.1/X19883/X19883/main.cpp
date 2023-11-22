#include <iostream>
using namespace std;

int main(){
    int n, x;
    while (cin >> n){
        if(n < 0){
            cout << ':';
            n *= -1;
        }
        if (n == 0) cout << '-' << endl;
        else{
            while(n >= 1){
                x = n % 3;
                n /= 3;
                if(x == 0) cout << '-';
                else if(x == 1) cout << '+';
                else cout << '*';
            }
            cout << endl;
        }
    }
}
