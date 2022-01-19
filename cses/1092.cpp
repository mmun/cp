#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
  ll n; cin >> n;
  ll s = n*(n+1)/2;

  if (s%2) {
    cout << "NO\n";
  } else {
    vector<ll> v1, v2;
    ll s1 = 0;

    for (ll i = n; i > 0; i--) {
      if (s1 + i <= s/2) {
        s1 += i;
        v1.push_back(i);
      } else {
        v2.push_back(i);
      }
    }

    cout << "YES\n";
  
    cout << v1.size() << "\n";
    for (auto i : v1) cout << i << " ";
    cout << "\n";
  
    cout << v2.size() << "\n";
    for (auto i : v2) cout << i << " ";
    cout << "\n";
  }
}
