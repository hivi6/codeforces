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
	ll n, m;
	cin >> n >> m;

	vector<ll> b(n * m);
	for (auto &x: b) cin >> x;

	sort(b.begin(), b.end());
	ll maxElem1 = b[b.size()-1], maxElem2 = b[b.size()-2], minElem1 = b[0], minElem2 = b[1];
	ll res1 = (maxElem1 - minElem2) * (min(n, m) - 1) + (maxElem1 - minElem1) * (n * m - min(n, m));
	ll res2 = (maxElem2 - minElem1) * (min(n, m) - 1) + (maxElem1 - minElem1) * (n * m - min(n, m));
	cout << max(res1, res2) << endl;
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

