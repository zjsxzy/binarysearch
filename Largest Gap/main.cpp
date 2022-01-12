#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

int solve(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    int res = 0, n = nums.size();
    if (n == 1) return 0;
    for (int i = 1; i < n; i++) {
        res = max(res, nums[i] - nums[i - 1]);
    }
    return res;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    solve();
    return 0;
}

