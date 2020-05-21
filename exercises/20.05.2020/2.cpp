#include <iostream>
#include <string>
using namespace std;

int main() {
    int m, n, k;
    cin >> m;
    while (m--) {
        cin >> n >> k;
        string s(n, 'a');
        for (int i = n - 2; i >= 0; i--) {
            if (k <= n - 1 - i) {
                s[i] = 'b';
                s[n - k] = 'b';
                cout << s << endl;
                break;
            }
            k -= (n - 1 - i);
        }
    }
}
