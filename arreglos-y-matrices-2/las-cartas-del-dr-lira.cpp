#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(0);cin.tie(0);
long long i,j,n,si=0,no=0;
cin>>n;
long long num[n];
for (i=0;i<n;i++) {
    cin>>num[i];
}
for (i=0;i<n;i++) {
    if (i%2==0 && num[i]==1) {
        si++;
    }
    else if (i%2==1 && num[i]==0) {
        si++;
    }
}
for (i=0;i<n;i++) {
    if (i%2==0 && num[i]==0) {
        no++;
    }
    else if (i%2==1 && num[i]==1) {
        no++;
    }
}
if (no<si) {
    cout<<no;
}
else {
    cout<<si;
}
return 0;
}
