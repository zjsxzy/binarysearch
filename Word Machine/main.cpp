#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

int solve(vector<string>& ops) {
    vector<int> stk;
    for (auto& op: ops) {
        if (op == "POP") {
            if (stk.empty()) return -1;
            stk.pop_back();
        } else if (op == "DUP") {
            if (stk.empty()) return -1;
            int x = stk.back();
            stk.push_back(x);
        } else if (op == "+") {
            if (stk.empty()) return -1;
            int x = stk.back(); stk.pop_back();
            if (stk.empty()) return -1;
            int y = stk.back(); stk.pop_back();
            stk.push_back(x + y);
        } else if (op == "-") {
            if (stk.empty()) return -1;
            int x = stk.back(); stk.pop_back();
            if (stk.empty()) return -1;
            int y = stk.back(); stk.pop_back();
            stk.push_back(x - y);
        } else {
            int x = stoi(op);
            stk.push_back(x);
        }
    }
    return stk.back();
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    solve();
    return 0;
}

