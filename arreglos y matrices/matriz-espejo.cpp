#include <bits/stdc++.h>
using namespace std;
int mat[100][100], N, M;
int main() {
ios_base::sync_with_stdio(0);cin.tie(0);
  cin >> N >> M;
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      cin >> mat[i][j];
    }
  }
  for (int i = 0; i < N; i++) {
    for (int j = M-1; j >= 0; j--) {
      cout << mat[i][j] << " ";
    }
    cout << '\n';
  }
  return 0;
}
