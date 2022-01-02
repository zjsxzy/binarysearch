#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

int solve(vector<int>& tasks, int k) {
    int n = tasks.size();
    map<int, int> ti;
    int curr = 0;
    for (int i = 0; i < n; i++) {
        cout << tasks[i] << " " << curr << endl;
        if (ti.find(tasks[i]) != ti.end()) {
            // wait
            if (curr - ti[tasks[i]] <= k) {
                // cout << curr << " " << curr - ti[tasks[i]] << endl;
                curr += k - (curr - ti[tasks[i]]) + 1;
            }
        }
        ti[tasks[i]] = curr;
        curr++;
    }
    return curr;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    solve();
    return 0;
}

