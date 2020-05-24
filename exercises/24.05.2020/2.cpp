#include<iostream>
#include<algorithm>
using namespace std;
#define ll long long
int main() {
	int t;
	cin >> t;
	while (t--) {
		ll n, g, b;
		cin >> n >> g >> b;
		ll ans = n;
		n = (n + 1) / 2;
		ll k = (n + g - 1) / g;
		cout << max(ans, (k - 1) * b + n) << endl;
	}
}