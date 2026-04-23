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

	vector<ll> h(n);
	for (auto &x: h) cin >> x;

	ll cur = h[k-1];

	sort(h.begin(), h.end());
	ll water = 0;
	for (int i = 0; i < n; i++) {
		if (h[i] > cur) {
			ll diff1 = h[i] - cur;
			ll diff2 = cur - water;

			if (diff2 < diff1) {
				break;
			}
			
			cur += diff1;
			water += diff1;
		}
	}
	cout << (cur == h.back() ? "YES" : "NO") << endl;
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

