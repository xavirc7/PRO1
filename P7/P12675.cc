#include <iostream>
#include <vector>
using namespace std;


int common_elements (const vector<int>& X, const vector<int>& Y) {
    int count = 0;
    int x = X.size() - 1;
    int y = Y.size() - 1;
    int i = 0;
    int j = 0;
    while (i <= x and j <= y) {
        if (X[i] == Y[j]) {
            ++count;
            ++i;
            ++j;
        }
        else if (X[i] < Y[j]) ++i;
        else if (X[i] > Y[j]) ++j;
    }
    return count;
}

// int main ()
// {
//     int n, m;
//     while (cin >> m >> n) {
//
//         vector<int> X(m);
//         for (int i=0; i<m; ++i) cin >> X[i];
//
//         vector<int> Y(n);
//         for (int i=0; i<n; ++i) cin >> Y[i];
//
//         cout << common_elements(X,Y) << endl;
//
//     }
//     return 0;
// }
