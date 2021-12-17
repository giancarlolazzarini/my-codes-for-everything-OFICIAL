#include <bits/stdc++.h>
using namespace std;
int main(){
long long n,i;
cin>>n;
long long num[n];
for (i=0;i<n;i++) {
    cin>>num[i];
}
for (i=n-1;i>=0;i--) {
    cout<<num[i]*num[i]<<endl;
}
return 0;
}
