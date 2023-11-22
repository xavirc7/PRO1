#include <iostream>
using namespace std;

bool is_leap_year(int year) {
    if ((year - 2020) % 4 == 0) year = true;
    else year = false;
    return year;
}

int main () {
    int x;
    while (cin >> x) cout << is_leap_year(x) << endl;
}
