#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

int solve(vector<int>& nums) {
    int n = nums.size();
    map<int, int> cnt, l, r;
    int k = 0;
    for (int i = 0; i < n; i++) {
        cnt[nums[i]]++;
        if (cnt[nums[i]] > k) {
            k = cnt[nums[i]];
        }
        if (l.find(nums[i]) == l.end()) l[nums[i]] = i;
        r[nums[i]] = i;
    }
    int res = n;
    for (auto& [x, v]: cnt) {
        if (v == k) {
            res = min(res, r[x] - l[x] + 1);
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

