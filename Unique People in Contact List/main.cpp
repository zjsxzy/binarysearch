#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

int solve(vector<vector<string>>& contacts) {
    int n = contacts.size(), res = 0;
    set<string> emails;
    for (auto c: contacts) {
        bool flag = false;
        for (auto e: c) {
            if (emails.find(e) != emails.end()) {
                flag = true;
                break;
            }
        }
        for (auto e: c) emails.insert(e);
        if (!flag) res++;
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

