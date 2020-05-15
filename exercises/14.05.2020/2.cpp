#include <iostream>
using namespace std;
int main() {
	int x;
	long long int n;
	cin >> x;
	while (x--) {
		int ans = 0, a = 2;
		cin >> n;
		while (n >= 2) {
			for (int j = 1; n - (j * 2 + j - 1) >= 0; j++) n -= j * 2 + j - 1;
			ans++;
		}
		cout << ans << endl;
	}
}