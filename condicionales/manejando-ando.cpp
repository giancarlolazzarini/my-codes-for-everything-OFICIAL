#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b;
    cin >> a >> b;
    if(a>17){
        if(b>=60){
             cout << "Si puede manejar" << endl;
        }else{
             cout << "No puede manejar" << endl;
        }
    }else{
        cout << "No puede manejar" << endl;
    }
    return 0;
}
