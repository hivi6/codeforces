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

	vector<vector<ll>> a(n, vector<ll>(3));
	for (auto &x: a) cin >> x[0] >> x[1] >> x[2];

	sort(a.begin(), a.end());

	auto cmp = [](vector<ll> &x, vector<ll> &y) -> bool {
		return x[2] >= y[2];
	};
	
	priority_queue<vector<ll>, vector<vector<ll>>, decltype(cmp)> pq(cmp);
	
	ll cur = k;
	ll i = 0;
	while (true) {
		while (i < n && cur >= a[i][0]) {
			pq.push(a[i]);
			i++;
		}
		while (pq.size() && pq.top()[1] < cur) pq.pop();
		if (pq.empty()) break;
		cur = max(cur, pq.top()[2]);
		pq.pop();
	}
	cout << cur << endl;
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

