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
	ll x, y;
	cin >> x >> y;

	ll p = max(x, y) - min(x, y);
	ll res = 0;
	if (p == 0) {
		res = 1;
	}
	else {
		for (ll i = 1; i <= p; i++) {
			if (p % i == 0) res++;
		}
	}
	cout << res << endl;

	for (ll i = 0; i < x; i++) cout << 1 << " ";
	for (ll j = 0; j < y; j++) cout << -1 << " ";
	cout << endl;
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

