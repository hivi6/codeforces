#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <numeric>
#include <deque>
using namespace std;

using ll = long long;

void solve() {
	ll n;
	cin >> n;

	string s;
	cin >> s;

	ll cnt = 0;
	for (auto ch: s) if (ch == '1') cnt++;

	ll adj = 0;
	for (int i = 0; i < n-1; i++) if (s[i] == '1' && s[i] == s[i+1]) adj = 1;

	if (cnt % 2 == 0 && (cnt <= 2 && !adj || cnt > 2)) cout << "YES" << endl;
	else cout << "NO" << endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int testcases = 1;
	cin >> testcases;

	for (int tc = 1; tc <= testcases; tc++) {
		solve();
	}
	return 0;
}

