#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(0);cin.tie(0);
long long n,i,j;
cin>>n;
long long num[n];
bool flag = true;
for (i=0;i<n;i++) {
    cin>>num[i];
}
if (num[0]==0) {
    flag = false;
}
for (i=0;i<n;i++) {
    if (num[i]!=num[n-i-1]) {
        flag = false;
    }
}
if (flag == false) {
    cout<<"NO";
}
else {
    cout<<"SI";
}
return 0;
}
