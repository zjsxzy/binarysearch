#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

bool solve(vector<int>& nums, int k) {
    map<int, int> cnt;
    for (auto &x: nums) {
        cnt[x]++;
    }
    for (auto &x: nums) {
        if (cnt.find(k - x) != cnt.end()) {
            if (x != k - x || cnt[k - x] > 1) return true;
        }
    }
    return false;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    solve();
    return 0;
}

