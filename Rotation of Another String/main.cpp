#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

vector<int> find_substring(string pattern, string text) {
	int n = pattern.size();
	vector<int> next(n + 1, 0);
	for (int i = 1; i < n; i++) {
		int j = i;
		while (j > 0) {
			j = next[j];
			if (pattern[j] == pattern[i]) {
				next[i + 1] = j + 1;
				break;
			}
		}
	}

	vector<int> position;
	int m = text.size();
	for (int i = 0, j = 0; i < m; i++) {
		if (j < n && text[i] == pattern[j]) {
			j++;
		} else {
			while (j > 0) {
				j = next[j];
				if (text[i] == pattern[j]) {
					j++;
					break;
				}
			}
		}
		if (j == n) {
			position.push_back(i - n + 1);
		}
	}
	return position;
}

bool solve(string s0, string s1) {
    int n = s0.size(), m = s1.size();
    if (n != m) return false;
    s0 += s0;
    vector<int> p = find_substring(s1, s0);
    return p.size() > 0;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    solve();
    return 0;
}

