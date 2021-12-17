#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    if(t<15){
        cout << "fria!" << endl << "RIP escamitas :(";
    }
    if(t>=15 and t<21){
        cout << "fria!";
    }
    if(t>=21 and t<=29){
        cout << "tibia";
    }
    if(t>=30 and t<=34){
        cout << "caliente!";
    }
    if(t>=35){
        cout << "caliente!" << endl <<"RIP escamitas :(";
    }
    return 0;
}
