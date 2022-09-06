#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

int solve(vector<int>& nums, int target) {
    int k = lower_bound(nums.begin(), nums.end(), target) - nums.begin();
    while (k < (int)nums.size() && nums[k] == target) k++;
    return k;
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

