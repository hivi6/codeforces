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
	ll a, b;
	cin >> a >> b;

	if (a % 2 == 0 && b % 2 == 1) {
		cout << -1 << endl;
		return;
	}

	if (b % 2 == 1) {
		a *= b;
		b /= b;
	}
	else {
		ll k = b / 2;
		a *= k;
		b /= k;
		if (a % 2 == 1) {
			cout << -1 << endl;
			return;
		}
	}
	cout << (a + b) << endl;
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

