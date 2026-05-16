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

	ll px, py, qx, qy;
	cin >> px >> py >> qx >> qy;

	vector<double> a(n);
	for (auto &x: a) cin >> x;

	ll xdiff = (px - qx), ydiff = (py - qy);
	ll x2 = xdiff * xdiff, y2 = ydiff * ydiff;
	ll d2 = x2 + y2;
	double d = sqrt(d2 * 1.0);
	a.push_back(d);

	double sum = accumulate(a.begin(), a.end(), 0.0);
	ll res = 1;
	for (auto x: a) {
		if (x > sum - x) {
			res = 0;
			break;
		}
	}
	cout << (res ? "Yes" : "No") << endl;
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

