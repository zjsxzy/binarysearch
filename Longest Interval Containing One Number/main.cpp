#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

int solve(vector<int>& nums) {
    int n = nums.size();
    if (n == 1) return 100000;
    sort(nums.begin(), nums.end());
    int res = max(nums[1] - 1, 100000 - nums[n - 2]);
    for (int i = 0; i < n - 2; i++) {
        if (nums[i + 2] - nums[i] - 1 > res) {
            res = nums[i + 2] - nums[i] - 1;
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

