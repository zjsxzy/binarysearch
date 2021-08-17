#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

int solve(string s, int k) {
    set<int> st;
    for (auto &c: s) {
        st.insert(c);
    }
    int n = st.size();
    int res = 1;
    k = k / 2 + k % 2;
    for (int i = 0; i < k; i++) {
        res *= n;
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

