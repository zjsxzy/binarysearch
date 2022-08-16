#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

int solve(vector<int>& nums, int k) {
    int n = nums.size();
    sort(nums.begin(), nums.end());
    int res = 0;
    for (int i = 0, j = 0; i < n; i++) {
        while (j < n && nums[i] + nums[j] <= k) {
            j++;
        }
        j--;
        if (nums[i] * 2 <= k) res++;
        if (nums[i] + nums[j] > k) continue;
        int cnt = j - i;
        if (cnt >= 0) {
            res += (1 << cnt) - 1;
        }
        // cout << i << ' ' << j << ' ' << cnt << ' ' << res << endl;
    }
    return res;
}

int main() {
#ifndef ONLINE_JUDGE
   freopen("in.txt", "r", stdin);
#endif
   int ts = 1;
   // cin >> ts;
   for (int t = 1; t <= ts; t++) {
       solve();
   }
   return 0;
}

