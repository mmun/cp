#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int n;
  cin >> n;

  vector<tuple<int, int>> m;
  for (int i=0; i<n; i++) {
    int a, b;
    cin >> a >> b;
    m.push_back({b, a});
  }
  sort(m.begin(), m.end());

  int t = 0;
  int ans = 0;
  for (auto [b, a] : m) {
    if (a >= t) {
      ans++;
      t = b;
    }
  }
  cout << ans;
}
