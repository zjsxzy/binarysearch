#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

int solve(vector<int>& nums) {
    vector<int> ori = nums;
    sort(nums.begin(), nums.end());
    int res = 0, n = nums.size();
    for (int i = 0; i < n; i++) {
        res += (nums[i] == ori[i]);
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

