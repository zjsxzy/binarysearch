#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

vector<vector<int>> solve(vector<int>& nums) {
    vector<vector<int>> res;
    vector<int> curr;
    int n = nums.size();
    if (n == 0) return res;
    int val = nums[0];
    curr.push_back(val);
    for (int i = 1; i < n; i++) {
        if (nums[i] == val) {
            curr.push_back(nums[i]);
        } else {
            res.push_back(curr);
            curr.clear();
            curr.push_back(nums[i]);
            val = nums[i];
        }
    }
    res.push_back(curr);
    return res;
}

int main() {
#ifndef ONLINE_JUDGE
   (void)!freopen("in.txt", "r", stdin);
#endif
   int ts = 1;
   // cin >> ts;
   for (int t = 1; t <= ts; t++) {
       solve();
   }
   return 0;
}

