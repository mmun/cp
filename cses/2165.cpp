#include <bits/stdc++.h>
#define ll long long
using namespace std;

void move(ll n, int src, int dst, int aux) {
  if (!n) return;
  move(n-1, src, aux, dst);
  cout << src << " " << dst << "\n";
  move(n-1, aux, dst, src);
}

int main() {
  ll n; cin >> n;

  cout << ((1 << n) - 1) << "\n";
  move(n, 1, 3, 2);
}
