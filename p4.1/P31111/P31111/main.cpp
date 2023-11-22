#include <iostream>
using namespace std;

int main() {
    char a;
    int i = 0;
    bool correct = true;
    while(correct and cin >> a){
        if(a == '(') ++i;
        else if(a == ')') --i;
        if(i < 0) correct = false;
    }
    if(correct and i == 0) cout << "yes" << endl;
    else cout << "no" << endl;
}
