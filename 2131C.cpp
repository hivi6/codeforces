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
	ll n, k;
	cin >> n >> k;

	vector<ll> a(n), b(n);
	for (auto &x: a) {
		cin >> x; 
		x %= k;
		if (x > k / 2) x = k - x;
	}
	for (auto &x: b) {
		cin >> x;
		x %= k;
		if (x > k / 2) x = k - x;
	}

	sort(a.begin(), a.end());
	sort(b.begin(), b.end());

	for (int i = 0; i < n; i++) {
		if (a[i] != b[i]) {
			cout << "NO" << endl;
			return;
		}
	}
	cout << "YES" << endl;
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

