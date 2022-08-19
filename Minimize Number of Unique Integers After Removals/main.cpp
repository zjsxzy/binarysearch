#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

int solve(vector<int>& items, int n) {
    map<int, int> cnt;
    for (auto x: items) cnt[x]++;
    set<pair<int, int>> st;
    for (auto [k, v]: cnt) {
        st.insert({v, k});
    }
    int res = 0;
    for (auto [v, k]: st) {
        if (v <= n) {
            n -= v;
        } else {
            res++;
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

