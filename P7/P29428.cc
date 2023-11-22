#include <iostream>
#include <vector>
using namespace std;

bool conte(string s1, string s2){
    int i = 0;
    int j = 0;
    int n = s1.size();
    int m = s2.size();
    cout << n << m;
    while(i + m <= n){
        if(s1[i] == s2[j]){
            if(j + 1 == m) return true;
            else{
                ++i;
                ++j;
            }
        }
        else{
            ++i;
            j = 0;
        }
    }
    return false;
}

int main(){
    int n;
    cin >> n;
    string s;
    vector<string> v(n);
    for(int i = 0; i < n; ++i){
        cin >> s;
        v[i] = s;
    }
    for(int i = 0; i < n; ++i){
        cout << v[i] << ':';
        for(int j = 0; j < n; ++j){
            conte(v[i], v[j]);
            if(conte) cout << ' ' << v[j];
        }
        cout << endl;
    }
}
