#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

vector<int> solve(vector<int>& nums, vector<vector<int>>& queries) {
    int n = nums.size();
    vector<int> sum(n + 1);
    for (int i = 0; i < n; i++) {
        sum[i + 1] = sum[i] ^ nums[i];
    }
    vector<int> res;
    for (auto q: queries) {
        res.push_back(sum[q[1] + 1] ^ sum[q[0]]);
    }
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

