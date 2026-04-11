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
	string s;
	cin >> s;

	int res = 0;
	for (int i = 0; i < s.size();) {
		if (s[i] == 'u') {
			int left = i - 1;
			int right = i + 1;
			if (left < 0 || right >= s.size()) {
				s[i] = 's';
				res++;
				i++;
				continue;
			}

			if (s[left] == 'u') res++, s[left] = 's';
			if (s[right] == 'u') res++, s[right] = 's';
			i += 2;
		}
		else i++;
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

