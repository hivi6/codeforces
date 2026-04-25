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

	/**
	// Brute force solution
	ll res = INT_MAX;
	for (int i = 0; i < n; i++) {
		ll minElem = a[i], maxElem = a[i];
		ll temp = 0;
		for (int j = i+1; j < n; j++) {
			if (minElem-1 <= a[j] && a[j] <= maxElem+1) {
				res = min(res, temp);
			}
			temp++;
			minElem = min(minElem, a[j]);
			maxElem = max(maxElem, a[j]);
		}

		temp = 0;
		minElem = a[i], maxElem = a[i];
		for (int j = i-1; j >= 0; j--) {
			if (minElem-1 <= a[j] && a[j] <= maxElem+1) {
				res = min(res, temp);
			}
			temp++;
			minElem = min(minElem, a[j]);
			maxElem = max(maxElem, a[j]);
		}
	}
	cout << (res == INT_MAX ? -1 : res) << endl;
	**/

	ll res = false;
	for (int i = 0; i < n-1; i++) {
		if (abs(a[i] - a[i+1]) <= 1) {
			cout << 0 << endl;
			return;
		}

		if (i+2 < n) {
			if (a[i] < a[i+1] && a[i+1] > a[i+2] ||
				a[i] > a[i+1] && a[i+1] < a[i+2]) {
				res = true;
			}
		}
	}
	cout << (res ? 1 : -1) << endl;
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

