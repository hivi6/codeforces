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
	ll n, x;
	cin >> n >> x;

	vector<ll> a(n);
	for (auto &x: a) cin >> x;

	/** OG Method
	ll s = 0, last = 0;
	ll res = 0;
	multiset<ll> m(a.begin(), a.end());
	vector<ll> b;
	while (m.size()) {
		ll diff = (s / x + 1) * x - last;
		auto iter = m.lower_bound(diff);
		if (iter == m.end()) {
			s += *m.begin();
			b.push_back(*m.begin());
			m.erase(m.find(*m.begin()));
		}
		else {
			s += *m.rbegin();
			res += *m.rbegin();
			b.push_back(*m.rbegin());
			m.erase(m.find(*m.rbegin()));
		}
		last = s;
	}
	cout << res << endl;
	for (auto x: b) cout << x << " ";
	cout << endl;
	*/

	sort(a.begin(), a.end());
	ll s = 0;
	ll res = 0;
	ll left = 0, right = n-1;
	vector<ll> b;
	while (left <= right) {
		if ((a[right] + s) / x > s / x) {
			s += a[right];
			res += a[right];
			b.push_back(a[right]);
			right--;
		}
		else {
			s += a[left];
			b.push_back(a[left]);
			left++;
		}
	}
	cout << res << endl;
	for (auto x: b) cout << x << " ";
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

