#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
  int n; cin >> n;

  for (ll k = 1; k <= n; k++) {
    cout << (k*k)*(k*k-1)/2 - 4*(k-1)*(k-2) << endl;
  }
}
