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

	vector<ll> f(n+1);
	f[0] = 1;
	f[1] = 1;
	for (int i = 2; i <= n; i++) f[i] = f[i-1] + f[i-2];

	for (int i = 0; i < m; i++) {
		ll w, l, h;
		cin >> w >> l >> h;

		if (w >= f[n] && l >= f[n] && h >= f[n] && (w-f[n] >= f[n-1] || l-f[n] >= f[n-1] || h >= f[n] + f[n-1])) {
			cout << 1;
		}
		else cout << 0;
	}
	cout << endl;
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

