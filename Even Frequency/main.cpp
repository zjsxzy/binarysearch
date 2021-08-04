#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

bool solve(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    int n = nums.size();
    int cnt = 1;
    for (int i = 1; i < n; i++) {
        if (nums[i] != nums[i - 1]) {
            if (cnt & 1) return false;
            cnt = 1;
        } else {
            cnt++;
        }
    }
    if (cnt & 1) return false;
    return true; 
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    solve();
    return 0;
}

