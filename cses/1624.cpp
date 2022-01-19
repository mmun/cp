#include <bits/stdc++.h>
#define ll long long
using namespace std;

string b[8];
bool c[8];
bool d1[15];
bool d2[15];
int ans = 0;

void rec(int y) {
  if (y == 8) {
    ans++;
  } else {
    for (int x = 0; x < 8; x++) {
      if (c[x] || d1[x+y] || d2[x-y+7]) continue;
      if (b[y][x] == '*') continue;

      c[x] = d1[x+y] = d2[x-y+7] = true;
      rec(y + 1);
      c[x] = d1[x+y] = d2[x-y+7] = false;
    }
  }
}

int main() {
  for (int i=0; i<8; i++) cin >> b[i];
  rec(0);
  cout << ans;
}
