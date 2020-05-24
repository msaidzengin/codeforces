#include <iostream>
#include <cmath>
using namespace std;
int m[1001];

int main() {
	int n, x;
	cin >> n;
	for (int i = 0; i < n; i++) cin >> m[i];
	cin >> x >> x >> x;
	x = sqrt(1ll * m[1] * m[2] / x);
	cout << x << " ";
	for (int i = 1; i < n; i++) cout << m[i] / x << " ";
}