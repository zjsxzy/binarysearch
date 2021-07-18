#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

int dfs(int i, vector<int>& votes) {
    int n = votes.size();
    if (votes[i] < 0 || votes[i] >= n) {
        return votes[i];
    }
    votes[i] = dfs(votes[i], votes);
    return votes[i];
}
int solve(vector<int>& votes) {
    int n = votes.size();
    for (int i = 0; i < n; i++) {
        votes[i] = dfs(i, votes);
    }
    int res = 0;
    for (int i = 0; i < n; i++) {
        if (votes[i] < 0) res++;
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

