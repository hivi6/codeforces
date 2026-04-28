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

void solve() {
	ll n;
	cin >> n;

	vector<ll> a(n);
	for (auto &x: a) cin >> x;

	auto right = accumulate(a.begin(), a.end(), 0ll);
	ll neg = 0, pos = 0;
	ll res = LLONG_MIN;
	for (int i = 0; i < n; i++) {
		ll temp = 0;
		if (i == 0 || a[0] >= 0) temp = pos + neg;
		else {
			temp = pos + neg + 2 * a[0];
		}
		res = max(res, temp - (right - a[i]));

		if (a[i] < 0) neg += -a[i];
		else pos += a[i];

		right -= a[i];
	}
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

