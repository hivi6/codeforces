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

	vector<ll> a(n);
	for (auto &x: a) cin >> x;

	/*
	if (k % 2 == 1) {
		for (auto &x: a) if (x % 2 == 1) x += k;
	}
	else {
		for (auto &x: a) x += k * (x % (k+1));
	}
	*/

	for (ll g = 2;; g++) {
		if (gcd(g, k) != 1) continue;
		for (auto &x: a) while (x % g != 0) x += k;
		break;
	}

	for (auto x: a) cout << x << " ";
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

