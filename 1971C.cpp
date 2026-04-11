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
	ll a, b, c, d;
	cin >> a >> b >> c >> d;

	if (a > b) swap(a, b);

	ll cSide = 0, dSide = 0;
	cSide = (a <= c && c <= b);
	dSide = (a <= d && d <= b);
	cout << (cSide == dSide ? "NO" : "YES") << endl;
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

