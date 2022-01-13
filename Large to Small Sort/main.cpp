#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

vector<int> solve(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    vector<int> res;
    int n = nums.size();
    for (int l = 0, r = n - 1, i = 0; i < n; ) {
        res.push_back(nums[r]); r--; i++;
        if (i == n) break;
        res.push_back(nums[l]); l++; i++;
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

