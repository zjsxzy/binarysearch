#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

int solve(vector<int>& nums) {
    int n = nums.size();
    int mx = 0;
    vector<int> left(n);
    for (int i = 0; i < n; i++) {
        mx = max(mx, nums[i]);
        left[i] = mx;
    }
    int right = 0;
    int sum = 0;
    for (int i = n - 1; i >= 0; i--) {
        right = max(right, nums[i]);
        sum += min(left[i], right) - nums[i];
    }
    return sum;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    solve();
    return 0;
}

