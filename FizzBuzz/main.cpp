#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

vector<string> solve(int n) {
    vector<string> ans;
    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0 && i % 5 == 0) ans.push_back("FizzBuzz");
        else if (i % 5 == 0) ans.push_back("Buzz");
        else if (i % 3 == 0) ans.push_back("Fizz");
        else ans.push_back(to_string(i));
    }
    return ans;
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

