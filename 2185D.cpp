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
	ll n, m, h;
	cin >> n >> m >> h;

	vector<ll> a(n);
	for (auto &x: a) cin >> x;

	vector<ll> b(m), c(m);
	vector<ll> x(a.begin(), a.end()), y(n, -1);
	ll lastReset = -1;
	for (int i = 0; i < m; i++) {
		cin >> b[i] >> c[i];

		if (y[b[i]-1] < lastReset) {
			x[b[i]-1] = a[b[i]-1];
			y[b[i]-1] = lastReset;
		}

		x[b[i]-1] += c[i];
		if (x[b[i]-1] > h) {
			lastReset = i;
			y[b[i]-1] = lastReset;
			x[b[i]-1] = a[b[i]-1];
		}
	}

	for (int i = 0; i < n; i++) {
		if (y[i] < lastReset) cout << a[i] << " ";
		else cout << x[i] << " ";
	}
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

