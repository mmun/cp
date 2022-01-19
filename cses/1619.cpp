#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int n;
  cin >> n;

  int c = 0;
  int c_max = 0;
  vector<tuple<int, int>> e;

  for (int i=0; i<n; i++) {
    int a, b;
    cin >> a >> b;
    e.push_back({a, 1});
    e.push_back({b, -1});
  }
  sort(e.begin(), e.end());

  for (auto [ignore, dc] : e) {
    c += dc;
    c_max = max(c, c_max);
  }
  cout << c_max;
}
