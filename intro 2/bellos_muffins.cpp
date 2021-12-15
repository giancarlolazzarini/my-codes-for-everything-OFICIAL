#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m, gil, s;
    cin >> n >> m;
    s = n/m;
    gil = n-(s*m);
    gil = gil+s;
    cout << gil;
    return 0;
}
