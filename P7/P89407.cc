#include <iostream>
#include <vector>
using namespace std;

//inp: x ≥ 1, y ≥ 1, x*y ≤ 10⁹
//out: Per a cada parell de x i y, en quines bases el producte x*y es estable

//pre: 1 <= n <= 10⁹, 2 <= b <= 16, v.size() = b, incr = {1, -1}
//post: se ha incrementado incr en cada digito
//      de n en base b en el vector v
void canvi_base(int n, int b, vector<int>& v, int incr) {
    while (n > 0) {
        v[n%b] += incr;
        n /= b;
    }
}


//pre: x ≥ 1, y ≥ 1, x*y ≤ 10⁹
//post: Indica si, en base b, x i y per una banda, i x * y per l’altra,
//      tenen els mateixos dígits
bool mateixos_digits(int x, int y, int b) {
    vector<int> cont(b, 0);

    canvi_base(x, b, cont, 1);
    canvi_base(y, b, cont, 1);
    canvi_base(x*y, b, cont, -1);

    //comprobamos si el cont es todo ceros
    for (int i = 0; i < b; ++i) {
        if (cont[i] != 0) return false;
    }
    return true;

}


//pre: 1 <= n <= 10⁹, 2 <= b <= 16
//post: escriu n en base b per pantalla
void escriu(int n, int b) {
    if (n > 0) {
        escriu(n/b, b);
        if (n%b < 10) cout << n%b;
        else cout << char(n%b - 10 + 'A');
    }
}

int main() {
    int x, y;
    while (cin >> x >> y) {
        cout << "solucions per a " << x << " i " << y << endl;
        bool hay = false;


        //mira las diferentes bases de 2 a 16
        for (int i = 2; i <= 16; ++i) {
            if (mateixos_digits(x, y, i)) {
                hay = true;
                escriu(x, i);
                cout << " * ";
                escriu(y, i);
                cout << " = ";
                escriu(x*y, i);
                cout << " (base " << i << ')' << endl;
            }
        }
        if (not hay) cout << "cap" << endl;
        cout << endl;
    }
}
