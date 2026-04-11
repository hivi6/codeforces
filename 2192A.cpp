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

	ll extendable = (s.front() != s.back());
	ll block = 0, len = 0;
	ll i = 0;
	while (i < n) {
		ll j = i;
		while (j < n && s[i] == s[j]) j++;
		len = max(len, j - i);
		block++;
		i = j;
	}
	if (extendable && len > 1) block++;
	cout << block << endl;
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

