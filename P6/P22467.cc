#include <iostream>
using namespace std;

int sum(int n) {
    int answ = 0;
    while (n != 0) {
        answ += n%10;
        n /= 10;
    }
    return answ;
}

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

bool is_perfect_prime(int n) {
    if (n < 10) return perfect_prime(n);
    else if (perfect_prime(n)) {
        return is_perfect_prime(sum(n));
    }
    else return false;
}

// int main() {
//     int n;
//     while (cin >> n) cout << (is_perfect_prime(n) ? "true" : "false") << endl;
// }
