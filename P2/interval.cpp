#include <iostream>
using namespace std;

int main () {
    int x, y;
    cin >> x >> y;
   
    if (x <= y) {
        while (x < y) {
            cout << x << ",";
            x++;
            
        }
           
        cout << y << endl;
        
    }
   
    if (x > y) cout << endl;

}
