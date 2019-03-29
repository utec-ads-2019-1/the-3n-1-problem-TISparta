#include <bits/stdc++.h>

using namespace std;

int compute (int n) {
  int cnt = 1;
  while (n != 1) {
    cnt++;
    if (n % 2 == 1) n = 3 * n + 1;
    else n = n / 2;
  }
  return cnt;
}

int main () {
  int l, r;
  while (cin >> l >> r) {
    int mx = 0;
    for (int i = min(l, r); i <= max(l, r); i++) mx = max(mx, compute(i));
    cout << l << ' ' << r << ' ' << mx << '\n';
  }
  return (0);
}
