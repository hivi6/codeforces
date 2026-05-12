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
	ll n, k;
	cin >> n >> k;

	string a;
	cin >> a;

	ll left = 0, right = n-1, tempk = k;
	while (left <= right && tempk) {
		if (tempk) if (a[left] == '1') a[left] = '0', tempk--;
		if (tempk) if (a[right] == '1') a[right] = '0', tempk--;
		left++;
		right--;
	}

	ll cnt = 0;
	for (auto x: a) if (x == '1') cnt++;

	if (cnt == 0) {
		cout << "Alice" << endl;
	}
	else {
		cout << (2 * k <= n ? "Bob" : "Alice") << endl;
	}
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

