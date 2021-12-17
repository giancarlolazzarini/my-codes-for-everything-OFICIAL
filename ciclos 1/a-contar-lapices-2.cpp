#include <bits/stdc++.h>
using namespace std;
int main() {
long long n,k,i,contador=0;
cin>>n;
long long num[n];
cin>>k;
for (i=0;i<n;i++) {
    cin>>num[i];
    if (num[i]==k) {
        contador++;
    }
}
cout<<contador;
return 0;
}
