#include <iostream>
#include <vector>
using namespace std;

bool found(const vector<int>& v, int n, int sum) {
    bool hola = false;

    int j = 0;
    while (not hola and j != n) {
        if (sum == 0 and v[j] != 0) hola = false;
        else hola = (sum - v[j]) == v[j];
        ++j;
    }
    return hola;
}

int main() {
    int n;
    while (cin >> n) {
        vector<int> v(n);
        int sum = 0;
        for (int i = 0; i < n; ++i) {
            cin >> v[i];
            sum += v[i];
        }
        if (found(v, n, sum)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
