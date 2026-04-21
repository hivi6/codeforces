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

	vector<ll> res;
	ll cnt = 1;
	res.push_back(cnt++);
	for (int i = 1; i < n; i++) {
		auto diff = a[i] - a[i-1];
		auto k = i - diff;
		if (k >= 0) res.push_back(res[k]);
		else res.push_back(cnt++);
	}
	
	for (auto x: res) cout << x << " ";
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

