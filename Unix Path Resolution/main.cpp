#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

vector<string> solve(vector<string>& path) {
    vector<string> ans;
    for (auto& p: path) {
        if (p == ".." && ans.size() > 0) {
            ans.pop_back();
        } else if (p != ".." && p != ".") {
            ans.push_back(p);
        }
    }
    return ans;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    solve();
    return 0;
}

