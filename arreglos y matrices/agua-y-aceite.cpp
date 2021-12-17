#include <bits/stdc++.h>
using namespace std;
int ar[20], N;
int main() {
  cin >> N;
  for (int i = 0; i < N; i++)
    cin >> ar[i];
  for (int i = 0; i < N; i++)
    if (ar[i] % 2 == 0)
      cout << ar[i] << " ";
  for (int i = 0; i < N; i++)
    if (ar[i] % 2 != 0)
      cout << ar[i] << " ";
  return 0;
}
