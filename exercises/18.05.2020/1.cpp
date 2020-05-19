#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long x;
        cin >> x;
        long long a = (x - 1) / 2;
        long long moves = 8 * (a * (a + 1) * (2 * a + 1)) / 6;
        cout << moves << '\n';
    }
}