#include <iostream>
#include <string>
using namespace std;
int n, m;
char lamb[2050][2050];
bool flag[2050];
int main() {
	cin >> n >> m;
	for (int i = 0; i < n; i++) cin >> lamb[i];
	int index;
	for (int i = 0; i < m; i++) {
		int count = 0;
		for (int j = 0; j < n; j++) {
			if (lamb[j][i] == '1') {
				count++;
				index = j;
			}
		}
		if (count == 1) flag[index] = 1;
	}
	for (int i = 0; i < n; i++) {
		if (!flag[i]) {
			cout << "YES\n";
			return 0;
		}
	}
	cout << "NO\n";
}