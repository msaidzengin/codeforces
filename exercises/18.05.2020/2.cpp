#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<int> e(n);
		for (int i = 0; i < n; ++i) cin >> e[i];
		sort(e.begin(), e.end());
		int cur = 0, ans = 0;
		for (int i : e) {
			cur++;
			if (cur >= i) {
				ans++;
				cur = 0;
			}
		}
		cout << ans << '\n';
	}
}