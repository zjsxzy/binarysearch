#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

int solve(vector<int>& nums) {
    int n = nums.size();
    int lo = 0, hi = n - 1, res = INT_MAX;
    while (lo <= hi){
        int mid = (lo + hi) >> 1;
        if (nums[mid] == mid) res = min(res, mid);
        if (nums[mid] - mid < 0) {
            lo = mid + 1;
        } else {
            hi = mid - 1;
        }
    }
    if (res == INT_MAX) return -1;
    else return res;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    solve();
    return 0;
}

