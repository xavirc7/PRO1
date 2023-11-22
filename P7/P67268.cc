#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        vector<int> v(n);
        bool start = true;
        for (int i = 0; i < n; ++i) {
            cin >> v[i];
        }
        for (int i = n - 1; i >= 0; --i) {
            if (start) {
                cout << v[i];
                start = false;
            }
            else cout << ' ' << v[i];
        }
        cout << endl;
    }
}
