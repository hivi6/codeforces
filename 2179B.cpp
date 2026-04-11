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

	vector<ll> a(n);
	for (auto &x: a) cin >> x;

	ll total = 0;
	for (int i = 1; i < n; i++) total += abs(a[i] - a[i-1]);

	ll res = INT_MAX;
	for (int i = 0; i < n; i++) {
		ll left = i - 1;
		ll right = i + 1;

		ll temp = 0;
		if (left >= 0) temp += abs(a[i] - a[left]);
		if (right < n) temp += abs(a[i] - a[right]);

		ll temp2 = total - temp;
		if (left >= 0 && right < n) temp2 += abs(a[left] - a[right]);
		res = min(res, temp2);
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

