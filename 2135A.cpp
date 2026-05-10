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

ll dp(vector<ll> &memo, vector<vector<ll>> &indices, const vector<ll> &a, ll i) {
	if (i >= a.size()) return 0;

	if (memo[i] != -1) return memo[i];

	ll res = dp(memo, indices, a, i+1);
	ll cur = a[i];
	auto iter = lower_bound(indices[cur].begin(), indices[cur].end(), i);
	iter += cur - 1;
	if (iter < indices[cur].end()) {
		res = max(res, dp(memo, indices, a, *iter+1) + a[i]);
	}

	return memo[i] = res;
}

void solve() {
	ll n;
	cin >> n;

	vector<ll> a(n);
	vector<vector<ll>> indices(n+1);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		indices[a[i]].push_back(i);
	}

	ll res = 0;
	vector<ll> memo(n+1, -1);
	for (int i = 0; i < n; i++) res = max(res, dp(memo, indices, a, i));
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

