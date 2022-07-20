#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

int solve(vector<int>& a, vector<int>& b, int k) {
    sort(b.begin(), b.end());
    int m = b.size(), res = 0;
    for (auto x: a) {
        auto n = lower_bound(b.begin(), b.end(), x + 1) - b.begin();
        if (m - n >= k) res++;
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

