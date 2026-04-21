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
using ull = unsigned long long;

void solve() {
	ll k, x;
	cin >> k >> x;

	ll left = x, right = (1ll << (k+1)) - x;
	vector<ull> res;
	while (left != right) {
		if (left < right) {
			right -= left;
			left += left;
			res.push_back(1);
		}
		else {
			left -= right;
			right += right;
			res.push_back(2);
		}
	}

	cout << res.size() << endl;
	reverse(res.begin(), res.end());
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

