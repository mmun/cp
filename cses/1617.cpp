#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll mod = 1e9 + 7;

int main() {
  ll n; cin >> n;

  ll a = 1;
  ll p = 2;
  while (n) {
    if (n%2) a = a*p % mod;
    p = p*p % mod;
    n /= 2;
  }
  cout << a;
}
