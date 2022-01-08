#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

int solve(vector<string>& words) {
    set<string> st;
    int res = 0;
    for (auto w: words) {
        int n = w.size();
        if (st.find(w) == st.end()) {
            res++;
        }
        w += w;
        for (int i = 0; i < n; i++) {
            st.insert(w.substr(i, n));
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

