#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

int solve(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    set<int> st;
    for (auto &x: nums) {
        st.insert(x);
    }
    int n = nums.size();
    for (int i = 0; i < n; i++) {
        if (st.find(-nums[i]) != st.end()) {
            return -nums[i];
        }
    }
    return -1;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    solve();
    return 0;
}

