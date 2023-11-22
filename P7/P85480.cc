#include <iostream>
#include <vector>
using namespace std;

bool perfect_prime(int n) {
    bool h;
    int x;
    h = n > 1;
    x = 2;
    while (h and x*x <= n) {
        h = (n%x != 0);
        ++x;
    }
    if (h or n == 2) return true;
    else return false;
}

int main() {
    int n;
    while (cin >> n) {
        vector<int> v(n);
        for (int i = 0; i < n; ++i) cin >> v[i];
        int k = 0;
        bool trobat = false;
        while (not trobat and k < n) {
            int j = 0;
            while (not trobat and j < n) {
                if (k != j) trobat = perfect_prime(v[k] + v[j]);
                ++j;
            }
            ++k;
        }
        if (trobat) cout << "yes" << endl;
        else cout << "no" << endl;

    }
}
