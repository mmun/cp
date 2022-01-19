#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
  ll t; cin >> t;
  while (t--) {
    ll a, b; cin >> a >> b;
    if (a < b) swap(a, b);

    if (a > 2*b) {
      cout << "NO\n";
    } else {
      ll d = a-b;
      a -= 2*d;
      b -= d;
      a %= 3;
      b %= 3;
      if (a == 0 || (a == 2 && b == 1) || (a == 1 && b == 2)) {
        cout << "YES\n";
      } else {
        cout << "NO\n";
      }
    }
  }

}
