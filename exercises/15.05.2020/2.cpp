#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int max = n;
    if (n == 1 || n == 2) max = 1;
    else if (n == 3) max = 2;
    cout << max << "\n";

    int i = 1, count = 0;
    for (i = n - (n % 2 == 0); i >= 1 && count < max; i -= 2) {
        ++count;
        if (i < n - (n % 2 == 0))  cout << ' ';
        cout << i;
    }
    for (i = n - (n & 1); i >= 1 && count < max; i -= 2) {
        cout << ' ' << i;
        ++count;
    }
}
