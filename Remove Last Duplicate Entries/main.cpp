#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

vector<int> solve(vector<int>& nums) {
    map<int, int> cnt;
    for (auto& x: nums) {
        cnt[x]++;
    }
    map<int, int> mp;
    vector<int> res;
    int n = nums.size();
    for (int i = 0; i < n; i++) {
        mp[nums[i]]++;
        if (mp[nums[i]] == 1 || mp[nums[i]] < cnt[nums[i]]) res.push_back(nums[i]);
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

