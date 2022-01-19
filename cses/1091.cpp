
#include "bits/stdc++.h"
#define ll long long
using namespace std;
 
int main() {
  int n, m;
  cin >> n >> m;
  
  multiset<int, greater<int>> h;
  for (int i=0; i<n; i++) {
    int x;
    cin >> x;
    h.insert(x);
  }

  for (int i=0; i<m; i++) {
    int t;
    cin >> t;

    auto it = h.lower_bound(t);
    if (it == h.end()) {
      cout << "-1\n";
    } else {
      cout << *it << "\n";
      h.erase(it);
    }
  }
}
