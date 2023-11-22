#include <iostream>
using namespace std;

int number_of_digits(int n) {
    if (n <= 9) return 1;

    return 1 + number_of_digits(n/10);
}
