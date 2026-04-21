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
	ll n, s;
	cin >> n >> s;

	vector<ll> a(n);
	ll zero = 0, one = 0, two = 0;
	for (auto &x: a) {
		cin >> x;
		zero += (x == 0);
		one += (x == 1);
		two += (x == 2);
	}
	
	vector<ll> res;
	for (int i = 0; i < zero; i++) res.push_back(0);
	for (int i = 0; i < two; i++) res.push_back(2);
	for (int i = 0; i < one; i++) res.push_back(1);

	/**
	// ORIGINAL SOLUTION
	s -= 2 * two + 1 * one;
	ll possible = true;
	for (int x = 0; x < 1000; x++) {
		ll temp = s - 2 * x;
		if (temp < 0) break;
		if (temp % 3 == 0) possible = false;
	}
	if (possible) {
		for (auto x: res) cout << x << " ";
		cout << endl;
	}
	else cout << -1 << endl;
	**/

	ll d = s - (1 * one + 2 * two);
	if (d == 1 || d < 0) {
		for (auto x: res) cout << x << " ";
		cout << endl;
	}
	else cout << -1 << endl;
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

