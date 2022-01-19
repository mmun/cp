#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
  ll n; cin >> n;
  ll s = 0;
  for (ll i = 1; i < n; i++) {
    ll x; cin >> x;
    s += x;
  }
  cout << n*(n+1)/2 - s;
}