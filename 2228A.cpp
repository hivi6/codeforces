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

	ll zero = 0, one = 0, two = 0;
	for (auto x: a) {
		if (x == 0) zero++;
		if (x == 1) one++;
		if (x == 2) two++;
	}

	ll minElem = min(one, two);
	cout << (zero + minElem + (one - minElem) / 3 + (two - minElem) / 3) << endl;
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

