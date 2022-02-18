#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

class HashTable {
    public:
    unordered_map<int, int> mp;

    HashTable() {
        mp.clear();
    }

    void put(int key, int val) {
        mp[key] = val;
    }

    int get(int key) {
        if (mp.find(key) == mp.end()) return -1;
        return mp[key];
    }

    void remove(int key) {
        mp.erase(key);
    }
};

void solve() {
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    solve();
    return 0;
}

