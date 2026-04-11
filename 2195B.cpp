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

	vector<vector<ll>> b;
	for (int i = 1; i <= n; i += 2) {
		vector<ll> temp;
		for (int j = i; j <= n; j *= 2) temp.push_back(a[j-1]);
		b.push_back(temp);
	}

	for (auto &x: b) {
		sort(x.begin(), x.end());
	}

	int top = 0;
	for (int i = 1; i <= n; i += 2) {
		for (int j = i, k = 0; j <= n; j *= 2, k++) a[j-1] = b[top][k];
		top++;
	}

	ll res = true;
	for (int i = 0; i < n-1; i++) if (a[i] >= a[i+1]) res = false;
	cout << (res ? "YES" : "NO") << endl;
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
