#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

int solve(vector<int>& cells) {
    priority_queue<int> pq;
    for (auto &x: cells) {
        pq.push(x);
    }
    while (!pq.empty()) {
        int x = pq.top(); pq.pop();
        if (pq.empty()) return x;
        int y = pq.top(); pq.pop();
        if (x != y) {
            pq.push((x + y) / 3);
        }
    }
    return -1;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    solve();
    return 0;
}

