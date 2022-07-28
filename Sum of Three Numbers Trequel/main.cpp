#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

int solve(vector<int>& nums) {
    int n = nums.size();
    int inf = 1e9;
    vector<int> prev(n, -inf), next(n, -inf);
    set<int> st;
    for (int i = 0; i < n; i++) {
        if (st.size()) {
            auto x = st.lower_bound(nums[i] + 1);
            if (x != st.begin()) {
                x--;
                prev[i] = *x;
            }
        }
        st.insert(nums[i]);
    }
    st.clear();
    for (int i = n - 1; i >= 0; i--) {
        if (st.size()) {
            auto x = st.end();
            x--;
            if (*x >= nums[i]) next[i] = *x;
        }
        st.insert(nums[i]);
    }
    int mx = INT_MIN;
    for (int i = 1; i < n - 1; i++) {
        // cout << i << ' ' << prev[i] << ' ' << nums[i] << ' ' << next[i] << endl;
        mx = max(mx, nums[i] + prev[i] + next[i]);
    }
    return mx;
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

