#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

vector<int> solve(vector<int>& nums) {
    vector<int> res;
    int n = nums.size();
    if (n == 1) return res;
    for (int i = 0; i < n; i++) {
        if (i == 0) {
            if (nums[i] > nums[i + 1]) res.emplace_back(0);
        } else if (i == n - 1) {
            if (nums[i] > nums[i - 1]) res.emplace_back(n - 1);
        } else {
            if (nums[i - 1] < nums[i] && nums[i] > nums[i + 1]) {
                res.emplace_back(i);
            }
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

