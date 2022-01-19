#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;

  for (int i = 0; i < (1 << n); i++) {
    bitset<16> b(i ^ (i >> 1));
    cout << b.to_string().substr(16-n) << "\n";
  }
}
