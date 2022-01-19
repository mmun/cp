#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
  int n; cin >> n;
  vector<ll> p;
  ll s = 0;
  for (int i=0; i<n; i++) {
    ll x; cin >> x;
    s += x;
    p.push_back(x);
  }
  
  ll d_min = 1e9;
  for (int i=0; i<(1<<n); i++) {
    ll s1 = 0;
    for (int j=0; j<n; j++) {
      if (i & (1<<j)) s1 += p[j];
    }
    ll s2 = s - s1;
    ll d = abs(s1 - s2);
    d_min = min(d, d_min);
  }

  cout << d_min;
}
