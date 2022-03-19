#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

int solve(vector<int>& nums) {
    int n = nums.size(), res = 0;
    sort(nums.begin(), nums.end());
    if (n == 0) return 0;
    int best = nums[n - 1] + 1;
    for (int i = n - 2; i >= 0; i--) {
        best = max(best, nums[i] + n - i);
    }
    for (int i = 0; i < n; i++) {
        if (nums[i] + n >= best) return n - i;
    }
    return 1;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    solve();
    return 0;
}

