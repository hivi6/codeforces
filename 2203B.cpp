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
	string s;
	cin >> s;

	if (s.size() == 1) {
		cout << 0 << endl;
		return;
	}

	vector<ll> a;
	for (int i = 1; i < s.size(); i++) {
		a.push_back(s[i] - '0');
	}
	sort(a.begin(), a.end());

	ll res = INT_MAX;
	for (int i = 0; i < 2; i++) {
		ll sum = accumulate(a.begin(), a.end(), 0LL) + s[0] - '0';
		ll changed = 0;

		if (i == 1) {
			sum -= s[0] - '0';
			sum += 1;
			if (s[0] != '1') changed++;
		}

		for (int i = a.size()-1; sum >= 10 && i >= 0; i--) {
			sum -= a[i];
			changed++;
		}
		res = min(res, changed);
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

