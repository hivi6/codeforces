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

	vector<ll> b(n);
	map<ll, ll> freq;
	map<ll, vector<ll>> index;
	ll i = 0;
	for (auto &x: b) {
		cin >> x, freq[x]++;
		index[x].push_back(i++);
	}

	ll res = 1;
	ll last = 1;
	vector<ll> a(n);
	for (auto x: freq) {
		if (x.second % x.first != 0) {
			res = 0;
			break;
		}
		
		ll q = x.second / x.first;
		ll cnt = 0;
		for (auto j: index[x.first]) {
			cnt++;
			a[j] = last;
			if (cnt == x.first) last++, cnt = 0;
		}
	}

	if (!res) {
		cout << -1 << endl;
		return;
	}

	for (auto x: a) cout << x << " ";
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

