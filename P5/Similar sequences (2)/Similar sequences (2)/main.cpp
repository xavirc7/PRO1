#include <iostream>
using namespace std;

void info_sequencia(int& suma, int& ultim) {
    int x = 1;
    ultim = 0;
    while (x != 0) {
        cin >> x;
        suma += x;
        if (x != 0) ultim = x;
    }
}

int main() {
    int x0 = 0, x = 1, sum0 = 0, counter = 1;
    
    while (x != 0) {
        cin >> x;
        sum0 += x;
        if (x != 0) x0 = x;
    }
    
    x = 1;
    int sum1 = 1, seqlast = 1;
    while (x != 0 and seqlast != 0) {
        sum1 = 0;
        info_sequencia(sum1, seqlast);
        if (sum0 == sum1 and x0 == seqlast) counter++;
        
    }
    
    cout << counter << endl;
}
