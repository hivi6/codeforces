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

	vector<ll> l(n), r(n);
	for (auto &x: l) cin >> x;
	for (auto &x: r) cin >> x;

	vector<ll> remain;
	ll res = 0;
	for (int i = 0; i < n; i++) {
		res += max(l[i], r[i]);
		remain.push_back(min(l[i], r[i]));
	}
	sort(remain.rbegin(), remain.rend());
	cout << res + accumulate(remain.begin(), remain.begin()+k-1, 0ll) + 1 << endl;
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

