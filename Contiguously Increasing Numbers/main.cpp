#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

vector<int> solve(int start, int end) {
    vector<int> res;
    queue<long long> q;
    for (int i = 1; i < 10; i++) q.push(i);
    while (!q.empty()) {
        long long x = q.front(); q.pop();
        if (x >= start && x <= end) res.push_back(x);
        int d = x % 10;
        if (d != 9 && x < end) {
            q.push(x * 10 + d + 1);
        }
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

