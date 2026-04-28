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

	vector<ll> a(n), b(n), c(n);
	for (auto &x: a) cin >> x;
	for (auto &x: b) cin >> x;
	for (auto &x: c) cin >> x;

	ll cnt1 = 0;
	for (int i = 0; i < n; i++) {
		ll temp = true;
		for (int j = 0; j < n; j++) {
			if (a[j] >= b[(i+j)%n]) {
				temp = false;
				break;
			}
		}
		if (temp) cnt1++;
	}

	ll cnt2 = 0;
	for (int i = 0; i < n; i++) {
		ll temp = true;
		for (int j = 0; j < n; j++) {
			if (b[j] >= c[(i+j)%n]) {
				temp = false;
				break;
			}
		}
		if (temp) cnt2++;
	}

	cout << cnt1 * cnt2 * n << endl;
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

