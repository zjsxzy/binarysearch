#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

int solve(vector<string>& words) {
    int n = words.size();
    if (n == 0) return 0;
    int res = 1, tot = 1;
    char c = words[0][0];
    for (int i = 1; i < n; i++) {
        if (words[i][0] == c) {
            tot++;
        } else {
            tot = 1;
            c = words[i][0];
        }
        res = max(res, tot);
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

