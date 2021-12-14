#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

int solve(vector<int>& nums, int target) {
    sort(nums.begin(), nums.end());
    int res = INT_MIN, n = nums.size();
    int i = 0, j = n - 1;
    while (i < j) {
        int x = nums[i] + nums[j];
        if (x < target) {
            res = max(res, x);
            i++;
        } else {
            j--;
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

