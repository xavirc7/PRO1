#include <iostream>
#include <vector>
using namespace std;

vector<bool> pos_rampas (const vector <int>& V) {
    int n = V.size() - 2;
    vector<bool> v(n);
    for (int i = 0; i < n; ++i) {
        if (V[i] == 0 and V[i + 1] == 0 and V[i + 2] == 0) v[i] = false;
        else if (V[i] < V[i + 1] and V[i + 1] < V[i + 2]) v[i] = true;
        else if (V[i] > V[i + 1] and V[i + 1] > V[i + 2]) v[i] = true;
        else v[i] = false;
    }
    return v;
}

int pot_conflictivas (const vector <bool>& B) {
    int n = B.size() - 1;
    int cont = 0;
    for (int i = 0; i < n; ++i) {
        if (B[i] == true) {
            if (B[i + 1] == true)
                ++cont;
            if (B[i + 2] == true) ++cont;
        }
    }
    return cont;
}

vector<int> leer_vector(int n) {
    vector<int> v(n);
    for (int i = 0; i < n; ++i) cin >> v[i];
    return v;
}

int main() {
    int n;
    while (cin >> n) {
        if (n >= 3) {
            vector<int> seq = leer_vector(n);
            vector<bool> v = pos_rampas(seq);
            cout << "posiciones con rampa:";
            for (int i = 0; i < n; ++i) {
                if (v[i] == true) {
                    cout << ' ' << i;
                }
            }
            cout << endl;
            cout << "potencialmente conflictivas:";
            int m = pot_conflictivas(v);
            cout << ' ' << m << endl;
            cout << "---" << endl;
        }
        else {
            vector<int> seq = leer_vector(n);
            cout << "posiciones con rampa:" << endl;
            cout << "potencialmente conflictivas: 0" << endl;
            cout << "---" << endl;
        }
    }
}
