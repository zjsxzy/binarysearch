#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

bool solve(vector<int>& nums, int k) {
    int n = nums.size();
    map<int, int> cnt;
    for (auto x: nums) cnt[x]++;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int t = k - nums[i] - nums[j];
            if (cnt.find(t) == cnt.end()) continue;
            int tot = 0;
            if (nums[i] == t) tot++;
            if (nums[j] == t) tot++;
            if (cnt[t] - tot > 0) return true;
        }
    }
    return false;
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

