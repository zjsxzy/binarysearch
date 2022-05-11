#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

int solve(string message) {
    int n = message.size();
    message = " " + message;
    vector<int> dp(n + 1);
    dp[0] = 1;
    for (int i = 0; i < n; i++) {
        if (dp[i]) {
            if (message[i + 1] >= '1') {
                dp[i + 1] += dp[i];
                if (i + 2 <= n && stoi(message.substr(i + 1, 2)) <= 26) {
                    dp[i + 2] += dp[i];
                }
            }
        }
        // cout << i << " " << dp[i] << endl;
    }
    return dp[n];
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    solve();
    return 0;
}

