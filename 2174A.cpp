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
	string s;
	cin >> s;

	string t;
	cin >> t;

	map<char, ll> freq1, freq2;
	for (auto ch: s) freq1[ch]++;
	for (auto ch: t) freq2[ch]++;

	for (auto x: freq1) {
		if (x.second > freq2[x.first]) {
			cout << "Impossible" << endl;
			return;
		}
	}

	for (auto ch: s) {
		for (char x = 'a'; x < ch; x++) {
			for (int i = 0; i < freq2[x] - freq1[x]; i++) cout << x;
			freq2[x] = freq1[x];
		}
		cout << ch;
		freq1[ch]--;
		freq2[ch]--;
	}
	for (char x = 'a'; x <= 'z'; x++) {
		if (freq2[x] > 0) {
			for (int i = 0; i < freq2[x]; i++) cout << x;
		}
	}
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

