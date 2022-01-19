#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
  ll n; cin >> n;

  ll a = 0;
  for (ll i = 5; i <= n; i *= 5) {
    a += n / i;
  }
  cout << a;
}
