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

	ll left = 0, right = n-1;
	ll alternate = 0;
	while (left < right) {
		if (!alternate) {
			if (a[left] <= a[right]) cout << "LR";
			else cout << "RL";
			left++, right--;
		}
		else {
			if (a[left] <= a[right]) cout << "RL";
			else cout << "LR";
			left++, right--;
		}
		alternate = !alternate;
	}
	if (left == right) cout << "L";
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

