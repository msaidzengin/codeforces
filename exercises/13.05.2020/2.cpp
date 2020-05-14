#include<iostream>
#include<cmath>
using namespace std;

int main() {
	long long n, k, ans;
	cin >> n >> k;
	ans = n - (-3 + sqrt(9 + 8 * n + 8 * k)) / 2;
	cout << ans;
}