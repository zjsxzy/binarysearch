#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

bool solve(string s0, string s1) {
    int n = s0.size(), m = s1.size();
    if (abs(n - m) > 1) return false;
    if (n == m) {
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            if (s0[i] != s1[i]) cnt++;
        }
        return cnt <= 1;
    }
    if (n > m) {
        swap(s0, s1);
        swap(n, m);
    }
    int cnt = 0;
    for (int i = 0, j = 0; i < n && j < m; ) {
        if (s0[i] == s1[j]) {
            i++, j++;
        } else {
            cnt++;
            if (cnt == 2) return false;
            j++;
        }
    }
    return true;
}

int main() {
#ifndef ONLINE_JUDGE
   (void)!freopen("in.txt", "r", stdin);
#endif
   int ts = 1;
   // cin >> ts;
   for (int t = 1; t <= ts; t++) {
       solve();
   }
   return 0;
}

