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

	string s;
	cin >> s;

	vector<ll> one, zero;
	for (int i = 0; i < n; i++) {
		if (s[i] == '0') zero.push_back(i+1);
		else one.push_back(i+1);
	}

	if (one.size() % 2 == 0) {
		cout << one.size() << endl;
		if (one.size()) {
			for (auto x: one) cout << x << " ";
			cout << endl;
		}
		return;
	}

	if (zero.size() % 2 != 0) {
		cout << zero.size() << endl;
		for (auto x: zero) cout << x << " ";
		cout << endl;
		return;
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

