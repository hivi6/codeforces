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
	ll n, k;
	cin >> n >> k;

	vector<ll> a(n);
	for (auto &x: a) cin >> x;

	vector<ll> p(k);
	for (auto &x: p) cin >> x;

	ll kth = p[0]-1, special = a[kth];
	ll invert = 0;
	ll left = 0, right = n-1;

	ll res = 0;
	while (left < right) {
		auto tempK = (invert ? !special : special);
		while (left < kth && a[left] == tempK) left++;
		while (right > kth && a[right] == tempK) right--;

		if (left == right) break;

		while (left < kth && a[left] == !tempK) left++;
		while (right > kth && a[right] == !tempK) right--;

		invert = !invert;
		res++;
	}

	cout << (res + invert) << endl;
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

