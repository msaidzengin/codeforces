#include <iostream>
#include <string>
using namespace std;
int T, N;
string s;
 
int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> T;
	while (T--) {
		cin >> N >> s;
		string a, b;
		a += '1'; b += '1';
		int diff = 0;
		for (int i = 1; i < s.size(); i++) {
			if (diff == 0) {
				if (s[i] == '0') a += '0', b += '0';
				if (s[i] == '1') a += '1', b += '0', diff = 1;
				if (s[i] == '2') a += '1', b += '1';
			} else {
				a += '0'; b += s[i];
			}
		}
		cout << a << "\n" << b << "\n";
	}
	return 0;
}