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

	vector<vector<ll>> res(2, vector<ll>(n));
	for (ll i = 0, high = 2 * n, low = 1; i < n; i += 2, high -= 2, low += 2) {
		res[0][i] = high;
		res[0][i+1] = low + 1;
		res[1][n - i - 1] = high - 1;
		res[1][n - i - 2] = low;
	}
	for (auto x: res) {
		for (auto y: x) cout << y << " ";
		cout << endl;
	}
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

