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
	ll w, h, d;
	cin >> w >> h >> d;

	ll n;
	cin >> n;

	for (ll x = 1; x * x <= w; x++) {
		if (w % x != 0) continue;

		vector<ll> xDiv = {x, w/x};
		for (ll y = 1; y * y <= h; y++) {
			if (h % y != 0) continue;
			
			vector<ll> yDiv = {y, h/y};
			for (auto p: xDiv) {
				for (auto q: yDiv) {
					ll r = p * q;
					if (n % r != 0) continue;
					r = n / r;
					if (d % r != 0) continue;

					cout << p-1 << " " << q-1 << " " << r-1 << endl;
					return;
				}
			}
		}
	}

	cout << -1 << endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int testcases = 1;
	// cin >> testcases;

	for (int tc = 1; tc <= testcases; tc++) {
		solve();
	}
	return 0;
}

