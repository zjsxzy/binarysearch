#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

int solve(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    reverse(nums.begin(), nums.end());
    int mx = nums[0], res = 0, cur = 0, n = nums.size();
    for (int i = 1; i < n; i++) {
        if (mx > nums[i] + cur) {
            res += mx - nums[i] - cur;
            cur += mx - nums[i] - cur;
        }
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

