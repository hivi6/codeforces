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

	vector<ll> a(n), b(n);
	for (auto &x: a) cin >> x;
	for (auto &x: b) cin >> x;

	map<ll, ll> pos;
	for (int i = 0; i < n; i++) pos[a[i]] = i;

	ll last = -1;
	for (int i = 0; i < n; i++) {
		if (last > pos[b[i]]) {
			cout << "NO" << endl;
			return;
		}
		last = pos[b[i]];
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

