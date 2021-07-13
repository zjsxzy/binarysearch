#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

vector<string> solve(int n) {
    vector<string> res;
    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0) {
            res.emplace_back("clap");
            continue;
        }
        string num = to_string(i);
        int sz = num.size();
        auto it = num.find('3');
        if (it != num.npos) {
            res.emplace_back("clap");
            continue;
        }
        it = num.find('6');
        if (it != num.npos) {
            res.emplace_back("clap");
            continue;
        }
        it = num.find('9');
        if (it != num.npos) {
            res.emplace_back("clap");
            continue;
        }
        res.emplace_back(num);
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

