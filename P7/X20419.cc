#include <iostream>
#include <vector>
#include <string>
using namespace std;

const int LONG_ALFABETO = 'z' - 'a' + 1;

char letra_mas_frecuente(const string& s) {
    vector<int> v(LONG_ALFABETO, 0);
    int tam = s.length();
    for (int i = 0; i < tam; ++i) {
        ++v[s[i] - 'a'];
    }

    int mayor = 0;
    char mayor_letra = ' ';
    for (int i = 0; i < LONG_ALFABETO; ++i) {
        if (v[i] > mayor) {
            mayor = v[i];
            mayor_letra = char('a' + i);
        }
    }
    return mayor_letra;
}

int main() {
    cout.setf(ios::fixed);
    cout.precision(2);
    int n;
    double sum = 0;
    string s;
    cin >> n;
    vector<string> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
        s = v[i];
        sum += s.length();
    }
    double media = sum/n;
    cout << media << endl;

    for (int i = 0; i < n; ++i) {
        s = v[i];
        if (s.length() >= media) cout << s << ": " << letra_mas_frecuente(s) << endl;
    }
}
