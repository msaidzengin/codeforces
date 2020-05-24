#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int a = -1, b = -1, c = -1, ans = 1e9;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '1') a = i;
            if (s[i] == '2') b = i;
            if (s[i] == '3') c = i;
            if (min(min(a, b), c) != -1) ans = min(ans, max(max(a, b), c) - min(min(a, b), c) + 1);
        }
        if (ans == 1e9) ans = 0;
        cout << ans << "\n";
    }
    return 0;
}