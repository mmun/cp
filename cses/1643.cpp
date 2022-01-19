#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main() {
  int n;
  cin >> n;

  ll s;
  cin >> s;
  ll s_max = s;

  for (int i=1; i<n; i++) {
    ll x;
    cin >> x;

    s = max(s+x, x);
    s_max = max(s_max, s);
  }

  cout << s_max;
}