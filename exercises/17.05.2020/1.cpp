#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main() {
    int t;
    string line;
    cin >> t;
    while (t--) {
        cin >> line;
        int min = 0, cur = 0;
        for (char c : line) {
            if (c == 'R') cur = 0;
            else cur++;
            min = max(min, cur);
        }
        cout << min + 1 << "\n";
    }
}