#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

bool solve(string typed, string target) {
    int l = 0, r = 0;
    int n = typed.size(), m = target.size();
    while (l < n && r < m) {
        char c = typed[l];
        int cnt1 = 0, cnt2 = 0;
        while (c == typed[l]) {
            l++;
            cnt1++;
        }
        if (c != target[r]) return false;
        while (c == target[r]) {
            r++;
            cnt2++;
        }
        if (cnt1 < cnt2) return false;
    }
    if (l < n || r < m) return false;
    return true;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    solve();
    return 0;
}

