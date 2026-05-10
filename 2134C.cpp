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

	ll res = 0;
	for (int i = 1; i < n; i += 2) {
		ll left = a[i-1];
		ll right = (i+1 < n ? a[i+1] : 0);

		if (left+right > a[i]) {
			ll diff = left + right - a[i];
			res += diff;

			if (diff >= right) diff -= right, right = 0;
			else right -= diff, diff = 0;
			if (diff >= left) diff -= left, left = 0;
			else left -= diff, diff = 0;

			a[i-1] = left;
			if (i+1 < n) a[i+1] = right;
		}
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

