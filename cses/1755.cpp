#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
  string s; cin >> s;
  array<int, 26> h;
  h.fill(0);

  for (char c : s) h[c-'A']++;

  int odds = 0;
  for (int i = 0; i < 26; i++) odds += h[i] % 2;
  
  if (odds > 1) {
    cout << "NO SOLUTION";
  } else {
    for (int i = 0; i < 26; i++) {
      if (h[i] % 2 == 0) {
        for (int j = 0; j < h[i]/2; j++)
          cout << (char)('A' + i);
      }
    }
    for (int i = 0; i < 26; i++) {
      if (h[i] % 2 == 1) {
        for (int j = 0; j < h[i]; j++)
          cout << (char)('A' + i);
      }
    }
    for (int i = 25; i >= 0; i--) {
      if (h[i] % 2 == 0) {
        for (int j = 0; j < h[i]/2; j++)
          cout << (char)('A' + i);
      }
    }
  }
}
