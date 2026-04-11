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

void solve() {
	ll n;
	cin >> n;

	vector<ll> a(n);
	for (auto &x: a) cin >> x;

	sort(a.begin(), a.end());

	ll res = 0, i = 0;
	while (i < n) {
		ll j = i;
		ll temp = 0;
		while (j < n-1) {
			if (a[j+1] > a[j]+1) break;
			if (a[j+1] == a[j]+1) temp++;
			j++;
		}

		res = max(res, temp+1);
		i = j + 1;
	}
	cout << res << endl;
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

