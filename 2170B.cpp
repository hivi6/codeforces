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


	vector<ll> a(n);
	for (auto &x: a) cin >> x;

	ll s = accumulate(a.begin(), a.end(), 0ll);
	ll cnt = 0;
	for (auto x: a) if (x) cnt++;

	while (cnt >= 0) {
		if (s - cnt >= n-1) break;
		cnt--;
	}
	cout << cnt << endl;
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

