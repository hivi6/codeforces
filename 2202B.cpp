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

char inv(char ch) {
	return (ch == 'a' ? 'b' : 'a');
}

bool dp(vector<vector<vector<ll>>> &memo, const string &s, const string &a, int i, char front, char back) {
	if (i == s.size()) return true;

	if (memo[i][front-'a'][back-'a'] != -1) return memo[i][front-'a'][back-'a'];

	ll res = false;
	if (s[i] == front || s[i] == '?') res |= dp(memo, s, a, i+1, inv(front), back);
	if (s[i] == back || s[i] == '?') res |= dp(memo, s, a, i+1, front, inv(back));
	return memo[i][front-'a'][back-'a'] = res;
}

void solve() {
	ll n;
	cin >> n;

	string s;
	cin >> s;

	string a;
	for (int i = 0; i < n; i++) a.push_back(i % 2 == 0 ? 'a' : 'b');

	vector<vector<vector<ll>>> memo(n, vector<vector<ll>>(2, vector<ll>(2, -1)));
	cout << (dp(memo, s, a, 0, 'a', (n % 2 == 0 ? 'b' : 'a')) ? "YES" : "NO") << endl;
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

