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
	// Upsolving this question
	// According to this question the number of total edges will be p + 2 * q
	// Again, we have to create an n * m grid, whose size based on n and m will be (n+1) * m + n * (m+1)
	// Now that means, p + 2 * q = (n + 1) * m + n * (m + 1)
	// So if we make m >= n then
	// => p + 2 * q = (n + 1) * m + n * (m + 1) >= (n + 1) * n + n * (n + 1)
	// => p + 2 * q >= 2 * (n + 1) * n
	// => p + 2 * q >= 2 * n^2
	// => (p + 2 * q) / 2 >= n^2
	// => sqrt((p + 2 * q) / 2) >= n
	// Now if we write m in terms of n, p, q
	// => p + 2 * q = (n + 1) * m + n * (m + 1)
	// => p + 2 * q = 2mn + m + n
	// => (p + 2q - n) / (2n + 1) = m
	// so now, we need to iterate from 1 to sqrt((p + 2 * q) / 2), and check if m is the above value.
	// Another thing we need to check that is if abs(m - n) <= p

	ll p, q;
	cin >> p >> q;

	for (ll n = 1; n <= sqrt((p + 2 * q) / 2); n++) {
		ll numerator = p + 2 * q - n;
		ll denominator = 2 * n + 1;
		ll m = numerator / denominator;
		if (numerator % denominator == 0 && abs(m - n) <= p) {
			cout << m << " " << n << endl;
			return;
		}
	}

	cout << -1 << endl;
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

