#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(1001, 0);
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        ++v[x - 1000000000];
    }

    for (int i = 0; i < 1001; ++i) {
        if (v[i] > 0) cout << 1000000000 + i << " : " << v[i] << endl;
    }
}
