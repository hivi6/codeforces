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

ll good(ll x) {
	return x % 2 > 0 && x % 3 > 0 && x % 5 > 0 && x % 7 > 0;
}

ll get_naive(ll x) {
	ll res = 0;
	for (ll i = 0; i < x; i++) {
		if (good(i)) res++;
	}
	return res;
}

ll get(ll r) {
	return (r / 210) * get_naive(210) + get_naive(r % 210);
}

void solve() {
	ll l, r;
	cin >> l >> r;

	cout << get(r+1) - get(l) << endl;
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

