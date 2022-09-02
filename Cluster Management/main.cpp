#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

bool solve(vector<int>& cores, vector<int>& tasks) {
    int n = cores.size(), m = tasks.size();
    sort(tasks.begin(), tasks.end(), greater<int>());
    function<bool(int)> dfs = [&](int i) {
        if (i == m) return true;
        for (auto& x: cores) {
            if (x >= tasks[i]) {
                x -= tasks[i];
                if (dfs(i + 1)) return true;
                x += tasks[i];
            }
        }
        return false;
    };
    return dfs(0);
}

int main() {
#ifndef ONLINE_JUDGE
   (void)!freopen("in.txt", "r", stdin);
#endif
   int ts = 1;
   // cin >> ts;
   for (int t = 1; t <= ts; t++) {
       solve();
   }
   return 0;
}

