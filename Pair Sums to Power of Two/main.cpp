#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

int solve(vector<int>& nums) {
    int n = nums.size();
    int res = 0;
    map<int, int> cnt;
    for (auto& x: nums) {
        for (int j = 0; j < 31; j++) {
            int key = 1 << j;
            if (cnt.find(key - x) != cnt.end())
                res += cnt[key - x];
        }
        cnt[x]++;
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

