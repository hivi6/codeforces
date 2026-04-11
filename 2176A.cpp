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

	ll res = 0, right = n - 1;
	for (int i = n - 1; i >= 0; i--) {
		for (int j = i+1; j <= right; ) {
			if (a[i] > a[j]) {
				for (int k = j; k < right; k++) swap(a[k], a[k+1]);
				right--;
				res++;
			}
			else j++;
		}
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

