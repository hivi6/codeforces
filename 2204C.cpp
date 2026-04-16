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

ll gcd(ll a, ll b) {
	if (a == 0 || b == 0) return a + b;
	return gcd(b, a % b);
}

ll lcm(ll a, ll b) {
	return a * b / gcd(a, b);
}

void solve() {
	ll a, b, c;
	cin >> a >> b >> c;

	ll m;
	cin >> m;

	cout << 6 * (m / a) - 3 * (m / lcm(a, b)) - 3 * (m / lcm(a, c)) + 2 * (m / lcm(c, lcm(a, b))) << " "
	     << 6 * (m / b) - 3 * (m / lcm(a, b)) - 3 * (m / lcm(b, c)) + 2 * (m / lcm(c, lcm(a, b))) << " "
	     << 6 * (m / c) - 3 * (m / lcm(c, b)) - 3 * (m / lcm(a, c)) + 2 * (m / lcm(c, lcm(a, b))) << endl;
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

