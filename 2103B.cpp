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

	string s;
	cin >> s;

	ll swaps = 0, last = '0';
	for (auto ch: s) {
		if (ch != last) swaps++;
		last = ch;
	}

	if (swaps >= 3) cout << swaps - 2 + n << endl;
	else if (swaps >= 2) cout << swaps - 1 + n << endl;
	else cout << swaps + n << endl;
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

