#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

vector<string> solve(string s, int k) {
    int n = s.size();
    vector<string> res(k);
    for (int i = 0; i < n; i++) {
        res[i % k] += s[i];
    }
    return res;
}

int main() {
    freopen("in.txt", "r", stdin);
    solve();
    return 0;
}

