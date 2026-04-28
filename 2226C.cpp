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

ll is(multiset<ll> m, ll x) {
	while (x >= 0) {
		if (m.count(x)) {
			m.erase(m.find(x));
		}
		else {
			auto iter = m.lower_bound(2*x+1);
			if (iter == m.end()) return false;
			m.erase(iter);
		}
		x--;
	}

	return true;
}

void solve() {
	// UPSOLVED THIS PROBLEM: Was a binary search problem

	ll n;
	cin >> n;

	vector<ll> a(n);
	for (auto &x: a) cin >> x;

	ll left = 0, right = n;
	multiset<ll> m(a.begin(), a.end());

	ll res = 0;
	while (left <= right) {
		auto mid = left + (right - left + 1) / 2;

		if (is(m, mid)) res = mid+1, left = mid + 1;
		else right = mid - 1;
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

