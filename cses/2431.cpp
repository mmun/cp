#include <bits/stdc++.h>
using namespace std;

int main() {
  int q; cin >> q;
  while (q--) {
    int k; cin >> k;

    int i = 1;
    int p = 9;

    while() {
      i++;
      p *= 10;
    }
  }

  for (int i = 0; i < (1 << n); i++) {
    bitset<16> b(i ^ (i >> 1));
    cout << b.to_string().substr(16-n) << "\n";
  }
}
