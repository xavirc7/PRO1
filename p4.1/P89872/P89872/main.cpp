#include <iostream>
using namespace std;

int main(){
    string s, l, sl;
    bool first = true;
    while (cin >> s){
        if (first){
            l = s;
            first = false;
        }
        else{
            if(s > l){
                sl = l;
                l = s;
            }
            else if (s > sl and s < l) sl = s;
        }
    }
    cout << sl << endl;
}
