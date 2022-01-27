#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

int solve(vector<int>& nums) {
    int n = nums.size();
    vector<int> left(n), right(n);
    left[0] = nums[0];
    for (int i = 1; i < n; i++) {
        left[i] = left[i - 1] + nums[i];
    }
    right[n - 1] = nums[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        right[i] = right[i + 1] + nums[i];
    }
    for (int i = 0; i < n; i++) {
        if (left[i] - nums[i] == right[i] - nums[i]) return i;
    }
    return -1;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    solve();
    return 0;
}

