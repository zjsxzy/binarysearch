#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

bool solve(vector<vector<string>>& matrix) {
    int n = matrix.size();
    vector<vector<int>> row(n, vector<int>(26)), col(n, vector<int>(26));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            row[i][matrix[i][j][0] - 'a']++;
            col[j][matrix[i][j][0] - 'a']++;
        }
    }
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = 0; j < 26; j++) {
            if (row[i][j] > 1) return false;
            else if (row[i][j] == 1) sum++;
        }
        if (sum != n) return false;
    }
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = 0; j < 26; j++) {
            if (col[i][j] > 1) return false;
            else if (col[i][j] == 1) sum++;
        }
        if (sum != n) return false;
    }
    for (int j = 0; j < 26; j++) {
        if (row[0][j]) {
            for (int i = 1; i < n; i++) if (!row[i][j]) return false;
        }
        if (col[0][j]) {
            for (int i = 1; i < n; i++) if (!col[i][j]) return false;
        }
    }
    return true;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    solve();
    return 0;
}

