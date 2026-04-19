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
	ll n, k, p, m;
	cin >> n >> k >> p >> m;

	vector<pair<ll, ll>> a;
	for (int i = 0; i < n; i++) {
		ll temp;
		cin >> temp;
		a.push_back({temp, i+1});
	}

	set<pair<ll, ll>> window;
	for (int i = 0; i < k; i++) {
		window.insert(a[i]);
	}

	queue<pair<ll, ll>> rest;
	for (int i = k; i < n; i++) {
		rest.push(a[i]);
	}

	ll inWindow = (p <= k);
	ll res = 0;
	while (m > 0) {
		pair<ll, ll> temp;
		if (inWindow) {
			temp = a[p-1];
			inWindow = false;
		}
		else {
			temp = *window.begin();
		}

		if (m < temp.first) break;

		m -= temp.first;
		rest.push(temp);

		if (rest.front().second == p) inWindow = true;

		window.insert(rest.front());
		rest.pop();
		window.erase(temp);

		if (temp.second == p) res++;
	}
	cout << res << endl;
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

