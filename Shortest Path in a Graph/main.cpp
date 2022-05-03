#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

struct edge {
    int to, cost;
    edge(int to, int cost) {
        this->to = to;
        this->cost = cost;
    }
};
const int inf = 1e9;
vector<vector<edge>> adj;
int dijkstra(int st, int ed) {
    // construct graph: adj[u].emplace_back(v, c)
    vector<int> dist(adj.size(), inf);
    dist[st] = 0;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, st});
    while (!pq.empty()) {
        auto p = pq.top(); pq.pop();
        int v = p.second;
        if (p.first > dist[v]) continue;
        for (edge e : adj[v]) {
            int nd = p.first + e.cost;
            if (nd < dist[e.to]) {
                dist[e.to] = nd;
                pq.push({nd, e.to});
            }
        }
    }
    return dist[ed];
}

int solve(vector<vector<int>>& edges, int start, int end) {
    int n = 0;
    for (auto& e: edges) {
        n = max(n, e[0]);
        n = max(n, e[1]);
    }
    n++;
    adj.resize(n);
    for (int i = 0; i < n; i++) adj[i].clear();
    for (auto& e: edges) {
        adj[e[0]].emplace_back(e[1], e[2]);
    }
    int d = dijkstra(start, end);
    if (d == inf) return -1;
    return d;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    solve();
    return 0;
}

