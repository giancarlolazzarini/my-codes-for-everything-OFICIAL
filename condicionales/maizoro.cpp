#include <bits/stdc++.h>
using namespace std;
int a, b, k;
int main(){

    cin>>a>>b>>k;
    if(k==0){
        k=a+b;
        cout<<k<<endl;
    }
    if(k==1){
        k=a-b;
        cout<<k<<endl;
    }
    if(k==2){
        k=a*b;
        cout<<k<<endl;
    }
    if(k==3){
        k=a/b;
        cout<<k<<endl;
    }
    return 0;
}
