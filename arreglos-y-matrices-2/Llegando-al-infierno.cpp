#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(0);cin.tie(0);
long long n,m,i,j,k,aux;
cin>>n>>m;
if (n%m==0) {
    k=n/m;
}
else {
    k=n/m+1;
}
long long num[m][k],cont[m];
for (i=0;i<m;i++) {
    cont[i]=0;
}
aux = n;
for (i=0;i<k;i++) {
    for (j=0;j<m;j++) {
        if (n>0) {
        cin>>num[j][i];
        cont[j]++;
        n--;
        }
    }
}
n = aux;
for (i=0;i<m;i++) {
    for (j=0;j<k;j++) {
        if (cont[i]>0) {
        cout<<num[i][j]<<" ";
        cont[i]--;
        }
    }
    cout<<endl;
}
return 0;
}
