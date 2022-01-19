
#include "bits/stdc++.h"
#define ll long long
using namespace std;
 
int main() {
  const int N = 2e5;
  int n, x, p[N];
  cin >> n >> x;
  for (int i=0; i<n; i++) cin >> p[i];

  sort(p, p+n);

  int i=0, j=n-1;
  int ans=0;
  while (i <= j) {
    if (p[i] + p[j] <= x) i++;
    j--;
    ans++;
  }

  cout << ans;
}
