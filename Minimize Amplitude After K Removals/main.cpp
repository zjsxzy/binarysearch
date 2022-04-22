#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

int solve(vector<int>& nums, int k) {
    sort(nums.begin(), nums.end());
    int n = nums.size(), d = n - k;
    int res = nums[n - 1] - nums[0];
    for (int i = 0; i + d - 1 < n; i++) {
        if (nums[i + d - 1] - nums[i] < res) {
            res = nums[i + d - 1] - nums[i];
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

