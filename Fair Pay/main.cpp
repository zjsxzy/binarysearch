#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

int solve(vector<int>& ratings) {
    int n = ratings.size();
    priority_queue<pair<int, int>> pq;
    for (int i = 0; i < n; i++) {
        pq.push({-ratings[i], i});
    }
    int res = 0;
    vector<int> pay(n, 1);
    while (!pq.empty()) {
        auto [val, id] = pq.top(); pq.pop();
        if (id == 0) {
            if (ratings[id + 1] < ratings[id]) {
                pay[id] = pay[id + 1] + 1;
            }
        } else if (id == n - 1) {
            if (ratings[id - 1] < ratings[id]) {
                pay[id] = pay[id - 1] + 1;
            }
        } else {
            int t = 1;
            if (ratings[id + 1] < ratings[id]) {
                t = pay[id + 1] + 1;
            }
            if (ratings[id - 1] < ratings[id]) {
                t = max(t, pay[id - 1] + 1);
            }
            pay[id] = t;
        }
        res += pay[id];
        // cout << id << ' ' << pay[id] << endl;
    }
    return res;
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

