#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
  int n; cin >> n;

  ll ans = 0;
  ll x_max = 0; cin >> x_max;
  for (int i = 1; i < n; i++) {
    ll x; cin >> x;
    x_max = max(x, x_max);
    ans += x_max - x;
  }
  cout << ans;
}