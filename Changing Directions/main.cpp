#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

int solve(vector<int>& nums) {
    int res = 0, n = nums.size();
    for (int i = 1; i < n - 1; i++) {
        if (nums[i - 1] < nums[i] && nums[i] > nums[i + 1]) {
            res++;
        } else if (nums[i - 1] > nums[i] && nums[i] < nums[i + 1]) {
            res++;
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

