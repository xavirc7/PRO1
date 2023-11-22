#include <iostream>
#include <vector>
using namespace std;

void read_vector(vector<string>& v, int n) {
    for (int i = 0; i < n; ++i) cin >> v[i];
}

int main() {
    int n;
    cin >> n;
    vector<string> v(n);
    read_vector(v, n);

    for (int i = n - 1; i >= 0; --i) {
        string s = v[i];
        int tam = s.length();
        for (int j = tam - 1; j >= 0; --j) {
            cout << s[j];
        }
        cout << endl;
    }
}
