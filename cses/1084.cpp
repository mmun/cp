
#include "bits/stdc++.h"
#define ll long long
using namespace std;
 
int main() {
  const int N = 2e5;
  int n, m, k;
  int a[N], b[N];

  cin >> n >> m >> k;
  for (int i=0; i<n; i++) cin >> a[i];
  for (int j=0; j<m; j++) cin >> b[j];

  sort(a, a+n);
  sort(b, b+m);

  int ans=0, j=0;
  for (int i=0; i<n; i++) {
    while (j<m && b[j] < a[i]-k) j++;
    if (j==m) break;
    if (b[j] <= a[i]+k) ans++, j++;
  }

  cout << ans;
}
