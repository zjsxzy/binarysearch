#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

vector<string> solve(string s) {
    int n = s.size();
    vector<string> res;
    int cnt = 0;
    string cur = "";
    for (int i = 0; i < n; i++) {
        if (s[i] == '(') cnt++;
        else cnt--;
        cur += s[i];
        if (cnt == 0 && cur.size() > 0) {
            res.push_back(cur);
            cur = "";
        }
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

