#include <bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(0);cin.tie(0);
long long n,i,j=1;
cin>>n;
long long num[n];
for (i=0;i<n;i++) {
	cin>>num[i];
	if (i>0 && num[i-1]<=num[i]) {
		j++;
	}
	else j=1;
}
while (n>j) {
	n=n/2;
}
cout<<n;
return 0;
}
