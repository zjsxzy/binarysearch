#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

string solve(string s) {
    vector<int> pos(26, -1);
    int n = s.size();
    for (int i = n - 1; i >= 0; i--) {
        if (pos[s[i] - 'a'] == -1) {
            pos[s[i] - 'a'] = i;
        }
    }
    string t = s;
    sort(t.begin(), t.end());
    for (int i = 0; i < n; i++) {
        if (s[i] != t[i]) {
            int last_occ = pos[t[i] - 'a'];
            swap(s[i], s[last_occ]);
            break;
        }
    }
    return s;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    solve();
    return 0;
}

