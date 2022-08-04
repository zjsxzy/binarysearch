#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

int solve(vector<int>& nums, int target) {
    multiset<int> st;
    for (auto x: nums) st.insert(x);
    int res = INT_MAX;
    for (auto x: st) {
        auto it = st.find(x);
        st.erase(it);
        auto y = st.lower_bound(target - x + 1);
        if (y != st.end()) {
            res = min(res, x + *y);
        }
        st.insert(x);
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

