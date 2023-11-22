
#include <iostream>
using namespace std;

int sum_of_digits (int x){
 if (x < 10) return x;
 else return x % 10 + sum_of_digits (x / 10);
}

int reduction_of_digits (int x) {
 if (sum_of_digits(x) < 10) return sum_of_digits (x);
 else return reduction_of_digits (sum_of_digits (x));
}

int main() {
 int y;
 cin >> y;
 cout << reduction_of_digits (y) << endl;
}
