#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

vector<string> split(string &s, char delimiter) {
    vector<string> words;
    string token;
    stringstream tokenStream(s);

    while (getline(tokenStream, token, delimiter)) {
        words.push_back(token);
    }
    return words;
}

int solve(string text, string word0, string word1) {
    if (word0 == word1) return 0;
    vector<string> words;
    words = split(text, ' ');
    int res = INT_MAX, n = words.size();
    vector<int> pos0, pos1;
    for (int i = 0; i < n; i++) {
        if (words[i] == word0) {
            pos0.push_back(i);
        } else if (words[i] == word1) {
            pos1.push_back(i);
        }
    }
    if (pos0.size() == 0 || pos1.size() == 0) return -1;
    for (auto u: pos0) {
        auto v = lower_bound(pos1.begin(), pos1.end(), u);
        int t = abs(u - *v) - 1;
        res = min(res, t);
        if (v != pos1.begin()) {
            v--;
            t = abs(u - *v) - 1;
            res = min(res, t);
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

