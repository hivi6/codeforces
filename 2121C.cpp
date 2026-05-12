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
	ll n, m;
	cin >> n >> m;

	vector<vector<ll>> a(n, vector<ll>(m));
	for (auto &x: a) for (auto &y: x) cin >> y;

	vector<vector<ll>> b;
	ll maxElem = a[0][0];
	vector<ll> rows(n+1), cols(m+1);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			maxElem = max(maxElem, a[i][j]);
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (a[i][j] == maxElem) {
				b.push_back({i, j});
				rows[i]++;
				if (i != j) cols[j]++;
			}
		}
	}

	bool res = false;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			auto temp = rows[i] + cols[j];
			if (temp == b.size()) res = true;
		}
	}
	cout << (res ? maxElem - 1 : maxElem) << endl;
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

