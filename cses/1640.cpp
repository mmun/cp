#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int n, x;
  cin >> n >> x;

  unordered_map<int, int> s;
  s.reserve(n);

  bool found = false;
  for (int i=0; i<n; i++) {
    int a;
    cin >> a;
    auto it = s.find(x-a);
    if (it == s.end()) {
      s.insert({a, i});
    } else {
      auto [ignore, j] = *it;
      cout << j+1 << " " << i+1;
      found = true;
      break;
    }
  }

  if (!found) {
    cout << "IMPOSSIBLE";
  }
}