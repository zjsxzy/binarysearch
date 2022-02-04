#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

class RunLengthDecodedIterator {
    public:
    stringstream ss;
    int length = 0;
    int count = 0;
    char c;
    RunLengthDecodedIterator(string s) : ss(s){
        length = ss.str().size();
    }

    string next() {
        if (!count) {
            ss >> count;
            ss >> c;
        }
        count--;
        return string(1, c);
    }

    bool hasnext() {
        return (count || ss.tellg() < length);
    }
};

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    solve();
    return 0;
}

