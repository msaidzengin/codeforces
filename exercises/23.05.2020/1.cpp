#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
	int h, w, j = 0;
	bool flag = 0;
	cin >> h >> w;
	vector<string>A(h);
	for (int i = 0; i < h; i++) cin >> A[i];
	for (int i = 1; i < h - 1; i++)
		for (int u = 1; u < w - 1; u++)
			if (A[i][u] == '*' && A[i - 1][u] == '*' && A[i + 1][u] == '*' && A[i][u - 1] == '*' && A[i][u + 1] == '*') {
				j++;
				for (int u2 = u; u2 < w && A[i][u2] == '*'; u2++)
					A[i][u2] = '1';
				for (int u3 = u - 1; u3 >= 0 && A[i][u3] == '*'; u3--)
					A[i][u3] = '1';
				for (int i2 = i - 1; i2 >= 0 && A[i2][u] == '*'; i2--)
					A[i2][u] = '1';
				for (int i3 = i + 1; i3 < h && A[i3][u] == '*'; i3++)
					A[i3][u] = '1';
			}
	
	for (int i = 0; i < h; i++)
		if (A[i].find("*") != -1)
			j = 2;
	cout << (j != 1 ? "NO" : "YES");
}