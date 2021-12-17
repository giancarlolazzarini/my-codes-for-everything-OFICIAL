#include<bits/stdc++.h>
using namespace std;
int main(){
int n,i,x, y=1, m;
cin >> n;
for(i=1;i<=n;i++){
for(x=0;x<y;x++){
cout << "*";
}
y = y + 2;
cout << endl;
}
cout << "###"<< endl << "###";
return 0;
}
