#include <bits/stdc++.h>
using namespace std;
int s, ans;
string a;
vector<int> sta;
	int main(){
		ios_base::sync_with_stdio(0);
		cin.tie(0);
		cin >> s;
		sta.push_back(580);
		sta.push_back(980);
		sta.push_back(1190);
		sta.push_back(1250);
		sta.push_back(1420);
		ans = 100000;
		if (s < 540 || s > 1520) {
			cout << "error\n";
			return 0;}
		for (int i = 0; i < 5; i++) {
			if (abs(s - sta[i]) <= ans) {
				ans = abs(s - sta[i]);
				if (s - sta[i] <= 0) {
					a = "adelante";}
				else {
					a = "atras";}}}
		cout << a << " " << ans << "\n";
	}
