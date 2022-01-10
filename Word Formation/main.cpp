#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

int solve(vector<string>& words, string letters) {
    vector<int> cnt(26);
    for (auto c: letters) {
        cnt[c - 'a']++;
    }
    int res = 0;
    for (auto& word: words) {
        if ((int)word.size() < res) continue;
        vector<int> t(26);
        bool flag = true;
        for (auto c: word) {
            t[c - 'a']++;
            if (t[c - 'a'] > cnt[c - 'a']) {
                flag = false;
                break;
            }
        }
        if (flag) {
            res = max(res, (int)word.size());
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

