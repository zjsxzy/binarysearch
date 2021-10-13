#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

bool solve(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    reverse(nums.begin(), nums.end());
    if (nums.size() < 2) return 0;
    return nums[0] > nums[1] * 2;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    solve();
    return 0;
}

