#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int x;
	cin >> x;
	while (x--) {
		long long n, k, u = 2;
		cin >> n >> k;
		while (n % u != 0) u++;
		n += u + (k - 1) * 2;
		cout << n << "\n";
	}
}