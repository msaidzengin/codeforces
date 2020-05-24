#include <iostream>
#include <vector>
using namespace std;
int main() {
	int n, x, count = 0;
	cin >> n;
	vector<int> cnt(n + 1, 0);
	for (int i = 0; i < n; i++) {
		cin >> x;
		cnt[x]++;
		if (cnt[x] > 1) count++;
	}
	cout << count + 1;
}