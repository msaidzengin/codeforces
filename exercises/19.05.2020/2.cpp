#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
	int n, ans = 1;
	string a, b, c;
	map<string, int>len;
	len["polycarp"] = 1;
	cin >> n;
	while (n--) {
		cin >> a >> b >> c;
		for (int i = 0; i < a.size(); i++)
			a[i] = tolower(a[i]);
		for (int i = 0; i < c.size(); i++)
			c[i] = tolower(c[i]);
		int e = len[c] + 1;
		if (e > ans)
			ans = e;
		len[a] = e;
	}
	cout << ans;
}