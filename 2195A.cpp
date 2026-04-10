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

	vector<ll> a(n);
	for (auto &x: a) cin >> x;

	ll one = 0, six_seven = 0;
	for (auto x: a) {
		if (x == 1) one++;
		if (x == 67) six_seven++;
	}
	cout << (six_seven ? "YES" : "NO") << endl;
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

