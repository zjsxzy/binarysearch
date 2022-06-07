#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

int solve(vector<int>& nums) {
    unordered_map<int, int> mp;
    int n = nums.size();
    for (int i = 0; i < n; i++) {
        mp[nums[i] - i] += nums[i];
    }
    int res = INT_MIN;
    for (auto [k, v]: mp) res = max(res, v);
    return res;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    solve();
    return 0;
}

