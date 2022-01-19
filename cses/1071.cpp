#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
  int t; cin >> t;

  while (t--) {
    ll x, y; cin >> x >> y;
    ll z = max(x, y);
    if (z%2) swap(x, y);
    cout << (z-1)*(z-1) + x + (z-y) << endl;
  }
}
