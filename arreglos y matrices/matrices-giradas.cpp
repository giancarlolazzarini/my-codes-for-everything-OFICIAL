#include <bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(0);cin.tie(0);
long long n,i,j;
cin>>n;
long long num[n][n];
for (i=0;i<n;i++) {
    for (j=0;j<n;j++) {
        cin>>num[i][j];
    }
}
for (i=0;i<n;i++) {
    for (j=n-1;j>=0;j--) {
        cout<<num[j][i]<<" ";
    }
    cout<<endl;
}
return 0;
}
