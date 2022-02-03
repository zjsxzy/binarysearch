#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

int solve(vector<int>& nums, vector<int>& multipliers) {
    sort(nums.begin(), nums.end());
    sort(multipliers.begin(), multipliers.end());
    int n = nums.size(), m = multipliers.size();
    if (n == 0 || m == 0) return 0;
    int i = 0, j = n - 1;
    int l = 0, r = m - 1;
    int res = 0;
    while (i <= j && l <= r) {
        if (nums[i] * multipliers[l] > nums[j] * multipliers[r]) {
            res += nums[i] * multipliers[l];
            i++; l++;
        } else {
            res += nums[j] * multipliers[r];
            j--; r--;
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

