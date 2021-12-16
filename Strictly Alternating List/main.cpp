#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

int cmp(int x, int y) {
    if (x > y) return -1;
    if (x < y) return 1;
    return 0;
}
bool solve(vector<int>& nums) {
    int n = nums.size();
    vector<int> dir;
    for (int i = 1; i < n; i++) {
        int d = cmp(nums[i - 1], nums[i]);
        if (d == 0) return false;
        if (dir.size() == 0 || dir[dir.size() - 1] != d) {
            dir.push_back(d);
        }
    }
    // for (auto d: dir) {
        // cout << d << " ";
    // }
    // cout << endl;
    return dir[0] == 1;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    solve();
    return 0;
}

