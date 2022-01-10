#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

int solve(string s) {
    int n = s.size();
    vector<int> prefix(n), suffix(n);
    if (s[0] == '0') prefix[0] = 1;
    if (s[n - 1] == '1') suffix[n - 1] = 1;
    for (int i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] + (s[i] == '0');
    }
    for (int i = n - 2; i >= 0; i--) {
        suffix[i] = suffix[i + 1] + (s[i] == '1');
    }
    int res = 0;
    for (int i = 0; i < n - 1; i++) {
        int temp = prefix[i] + suffix[i + 1];
        res = max(res, temp);
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

