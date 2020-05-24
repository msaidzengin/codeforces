#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        string s;
        cin >> s;

        vector<int> ps(m);
        for (int i = 0; i < m; i++) cin >> ps[i];

        vector<int> lookup(n, 0);
        for (int i = 0; i < m; i++) lookup[ps[i] - 1]++;

        for (int i = n - 1; i > 0; i--) lookup[i - 1] += lookup[i];

        vector<int> letters(26, 0);
        for (int i = 0; i < n; i++) letters[s[i] - 'a'] += lookup[i] + 1;

        for (int i = 0; i < 26; i++) {
            cout << letters[i] << ' ';
        }
        cout << endl;
    }
}