#include <bits/stdc++.h>
using namespace std;

int main() {
  string s; cin >> s;

  char cur = '?';
  int cnt = 0;
  int cnt_max = 0;

  for (char c : s) {
    if (c == cur) {
      cnt++;
    } else {
      cur = c;
      cnt = 1;
    }
    cnt_max = max(cnt_max, cnt);
  }
  cout << cnt_max;
}