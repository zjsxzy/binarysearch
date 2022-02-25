#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

bool solve(string s, string t) {
    int n = s.size(), m = t.size();
    if (n != m) return false;
    map<char, char> mp, rev;
    for (int i = 0; i < n; i++) {
        if (mp.count(s[i]) || rev.count(t[i])) {
            if (mp[s[i]] != t[i]) return false;
            if (rev[t[i]] != s[i]) return false;
        } else {
            mp[s[i]] = t[i];
            rev[t[i]] = s[i];
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

