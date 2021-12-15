#include <bits/stdc++.h>
using namespace std;
int main(){
int h, m, s, z=0, x=0;
cin>>h >>m >>s;
s=s+1;
while (s>=59){
s=s-60;
x=x+1;
}
m=m+x;
while (m>=60){
m=m-60;
z=z+1;
}
h=h+z;
while (h>=24){
h=h-24;
}
cout<<h <<":" <<m <<":" <<s;
return 0;
}
