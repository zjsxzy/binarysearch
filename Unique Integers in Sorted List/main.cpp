#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

int solve(vector<int>& nums) {
    int n = nums.size();
    if (n == 0) return 0;
    int x = nums[0];
    auto it = upper_bound(nums.begin(), nums.end(), x);
    int res = 1;
    while (it != nums.end()) {
        res++;
        int p = *it;
        it = upper_bound(nums.begin(), nums.end(), p);
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

