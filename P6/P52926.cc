#include <iostream>
using namespace std;

void impressio(){
    string c;
    cin >> c;
    if(c != "fi"){
        impressio();
        cout << c << endl;;
    }
}


int main(){
    impressio();
}
