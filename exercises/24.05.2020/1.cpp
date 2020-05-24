#include <iostream>
#include <string>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		for (int i = 0; i < 9; ++i) {
			string s;
			cin >> s;
			for (auto& c : s) if (c == '2') c = '1';
			cout << s << endl;
		}
	}
}