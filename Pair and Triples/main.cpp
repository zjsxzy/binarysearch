#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

bool solve(string s) {
    vector<int> cnt(10);
    for (auto &c: s) {
        cnt[c - '0']++;
    }
    for (int i = 0; i < 10; i++) {
        if (cnt[i] >= 2) {
            if ((cnt[i] - 2) % 3 == 0) {
                bool flag = true;
                for (int j = 0; j < 10; j++) {
                    if (i == j) continue;
                    if (cnt[j] % 3 != 0) {
                        flag = false;
                        break;
                    }
                }
                if (flag) return true;
            }
        }
    }
    return false;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    solve();
    return 0;
}

