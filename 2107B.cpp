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
	ll n, k;
	cin >> n >> k;

	vector<ll> a(n);
	for (auto &x: a) cin >> x;

	sort(a.begin(), a.end());
	a.back()--;
	sort(a.begin(), a.end());

	if (a.back() - a.front() > k) {
		cout << "Jerry" << endl;
		return;
	}

	ll res = accumulate(a.begin(), a.end(), 0ll);
	cout << (res % 2 != 0 ? "Jerry" : "Tom") << endl;
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

