#include <iostream>
#include <vector>
using namespace std;

vector<int> calcula_cimas(const vector<int>& v) {
    vector<int> cima;
    int n = v.size() - 1;
    for (int i = 1; i < n; ++i) {
        if (v[i] > v[i - 1] and v[i] > v[i + 1]) cima.push_back(v[i]);
    }
    return cima;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) cin >> v[i];

    vector<int> cal;
    cal = calcula_cimas(v);
    int tam = cal.size() - 1;

    cout << tam + 1 << ':';
    for (int i = 0; i <= tam; ++i) {
        cout << ' ' << cal[i];
    }
    cout << endl;

    bool trobat = false;
    bool primer = true;

    for (int i = 0; i <= tam - 1; ++i) {
        if (cal[i] > cal[tam]) {
            trobat = true;
            if (primer) {
                primer = false;
                cout << cal[i];
            }
            else {
                cout << ' ' << cal[i];
            }
        }
    }
    if (not trobat) cout << '-';
    cout << endl;
}
