#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

string solve(string s) {
   string res;
   int num = 0;
   for (auto &x: s) {
       if ('0' <= x && x <= '9') {
           num = num * 10 + x - '0';
       } else {
           for (int i = 0; i < num; i++) {
               res += x;
           }
           num = 0;
       }
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

