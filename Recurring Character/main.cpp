#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

int solve(string s) {
    set<int> st;
    int n = s.size();
    for (int i = 0; i < n; i++) {
        if (st.find(s[i]) != st.end()) {
            return i;
        } else {
            st.insert(s[i]);
        }
    }
    return -1;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    solve();
    return 0;
}

