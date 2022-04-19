#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

int solve(vector<int>& nums) {
    int res = 0, n = nums.size(), mx = 0;
    for (int i = n - 1; i >= 0; i--) {
        if (mx > nums[i]) {
            res += mx - nums[i];
        } else {
            mx = max(mx, nums[i]);
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

