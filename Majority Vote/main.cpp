#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

int solve(vector<int>& nums) {
    int n = nums.size();
    int maj = nums[0], cnt = 1;
    for (auto x: nums) {
        if (maj == x) {
            cnt++;
        } else {
            cnt--;
            if (cnt == 0) {
                maj = x;
                cnt = 1;
            }
        }
    }
    cnt = 0;
    for (auto x: nums) cnt += (x == maj);
    if (cnt > n / 2) return maj;
    return -1;
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

