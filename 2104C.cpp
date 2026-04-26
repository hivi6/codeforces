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

	if (s.back() == 'B') {
		ll bob = 0;
		for (int i = 0; i < n-1; i++) if (s[i] == 'B') bob++;
		cout << (bob ? "Bob" : "Alice") << endl;
		return;
	}
	if (s.front() == 'B') {
		if (s.back() == 'B' || s[n-2] == 'B') {
			cout << "Bob" << endl;
			return;
		}
	}
	cout << "Alice" << endl;
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

