#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

vector<int> solve(vector<int>& nums) {
    int n = nums.size();
    for (int i = 0; i < n; i += 4) {
        if (i + 2 < n) {
            int t = nums[i];
            nums[i] = nums[i + 2];
            nums[i + 2] = t;
        }
    }
    for (int i = 1; i < n; i += 4) {
        if (i + 2 < n) {
            int t = nums[i];
            nums[i] = nums[i + 2];
            nums[i + 2] = t;
        }
    }
    return nums;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    solve();
    return 0;
}

