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
	string n;
	ll j, k;
	cin >> n >> j >> k;

	vector<string> a;
	do {
		a.push_back(n);
	} while (next_permutation(n.begin(), n.end()));

	ll x = 0, y = 0;
	for (int i = 0; i < n.size(); i++) {
		if (a[j-1][i] == a[k-1][i]) x++;
	}
	cout << x << "A" << (n.size()-x) << "B" << endl;
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

