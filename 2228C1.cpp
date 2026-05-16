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
#include <queue>
using namespace std;

using ll = long long;

ll dp(const ll &a, ll b, ll last, const vector<ll> &d) {
	if (b > a || b == last) {
		return abs(a - b);
	}
	
	ll res = abs(a - b);
	res = min(res, dp(a, b * 10 + d[0], b, d));
	res = min(res, dp(a, b * 10 + d[1], b, d));
	return res;
}

void solve() {
	ll a, n;
	cin >> a >> n;

	vector<ll> d(n);
	for (auto &x: d) cin >> x;

	ll res = dp(a, 0, -1, d);
	cout << res << endl;
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

