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

ll d(ll n) {
	ll res = 0;
	while (n) res += n % 10, n /= 10;
	return res;
}

void solve() {
	ll n;
	cin >> n;

	ll res = 0;
	for (ll i = n; i < n + 100; i++) {
		if (i - d(i) == n) {
			res = true;
			break;
		}
	}
	cout << (res ? 10 : 0) << endl;
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

