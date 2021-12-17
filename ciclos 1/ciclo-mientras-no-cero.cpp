#include <bits/stdc++.h>
using namespace std;
int n, i, c, incremento=1;
int main(){
	cin>>n;
	for (int i = 0, c = 1;i < n;i++, c += incremento){
		if (c == 5){
			incremento = -1;
		}
		if (c == 1){
			incremento = 1;
		}
		cout<<c+" "<<endl;
	}
	return 0;
}
