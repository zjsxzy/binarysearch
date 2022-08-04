#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

int solve(string s) {
    int n = s.size();
    vector<int> prefixB(n), suffixA(n);
    for (int i = 0; i < n; i++) {
        if (i == 0) prefixB[i] = (s[i] == 'B');
        else prefixB[i] = prefixB[i - 1] + (s[i] == 'B');
    }
    for (int i = n - 1; i >= 0; i--) {
        if (i == n - 1) suffixA[i] = (s[i] == 'A');
        else suffixA[i] = suffixA[i + 1] + (s[i] == 'A');
    }
    int res = min(prefixB[n - 1], suffixA[0]);
    for (int i = 0; i < n; i++) {
        if (s[i] == 'A') {
            if (i == 0) res = min(res, suffixA[i + 1]);
            else if (i == n - 1) res = min(res, prefixB[i - 1]);
            else res = min(res, suffixA[i + 1] + prefixB[i - 1]);
        }
    }
    return res;
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

