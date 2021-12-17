#include <bits/stdc++.h>
using namespace std;
int n, k;
bool fib[200000];
	int main () {
		ios_base::sync_with_stdio(0);
		cin.tie(0);
		cin >> n;
		int f = 1, s = 1;
		while (f <= 30000) {
			fib[f + s] = true;
			int aux = f;
			f = f + s;
			s = aux;
		}
		for (int i = 4; i < n; i++) {
			if (!fib[i]) cout << i << " ";
		}
		cout << "\n";
	}
