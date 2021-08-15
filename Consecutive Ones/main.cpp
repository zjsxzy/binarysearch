#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

bool solve(vector<int>& nums) {
    int n = nums.size();
    int pos = -1;
    for (int i = 0; i < n; i++) {
        if (nums[i] == 1) {
            if (pos != -1 && i - pos > 1) return false;
            pos = i;
        }
    }
    return true;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    solve();
    return 0;
}

