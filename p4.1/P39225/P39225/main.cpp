#include <iostream>
using namespace std;

int main(){
    int n, x;
    cin >> n;
    for (int i = 1; i <= n; ++i){
        cin >> x;
        if (i == n) cout << "At the position " << n << " there is a(n) " << x << '.' << endl;
    }
}
