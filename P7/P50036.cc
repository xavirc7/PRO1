#include <iostream>
#include <vector>
#include <cmath>
using namespace std;


int evaluate(const vector<int>& P, int x) {
    int n = P.size();
    int sum = 0;
    int aux;
    for (int i = 0; i < n; ++i) {
        aux = pow(x, i);
        sum += (aux*P[i]);
    }
    return sum;
}


// int main() {
//     int n;
//     while (cin >> n) {
//         vector<int> P(n);
//         for (int i = 0; i <= n; ++i) cin >> P[i];
//         int x;
//         cin >> x;
//         cout << evaluate(P,x) << endl;
//     }
// }
