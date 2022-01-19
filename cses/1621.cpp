#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main() {
  int n; cin >> n;
  set<ll> m;
  for (int i=0; i<n; i++) {
    ll x; cin >> x;
    m.insert(x);
  }
  cout << m.size();
}
