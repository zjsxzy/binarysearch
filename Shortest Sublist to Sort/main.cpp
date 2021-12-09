#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

int solve(vector<int>& nums) {
    vector<int> ori = nums;
    sort(nums.begin(), nums.end());
    int l = -1, r = -1, n = nums.size();
    for (int i = 0; i < n; i++) {
        if (ori[i] != nums[i]) {
            if (l == -1) l = i;
            else r = i;
        }
    }
    if (l == -1 && r == -1) return 0;
    return r - l + 1;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    solve();
    return 0;
}

