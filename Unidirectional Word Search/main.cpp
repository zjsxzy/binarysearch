#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

bool solve(vector<vector<string>>& board, string word) {
    vector<string> str;
    int n = board.size();
    if (n == 0) return false;
    for (auto b: board) {
        string s;
        for (auto c: b) {
            s += c;
        }
        str.push_back(s);
    }
    int m = board[0].size();
    for (int j = 0; j < m; j++) {
        string s;
        for (int i = 0; i < n; i++) {
            s += board[i][j];
        }
        str.push_back(s);
    }
    for (auto s: str) {
        if (s.find(word) != string::npos) return true;
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

