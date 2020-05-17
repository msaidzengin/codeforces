#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int n, k, x, point = 0, initial = 0;
    vector<int> ths, bhs;

    cin >> n;
    cin >> k; 

    for (int i = 0; i < n; i++) cin >> x, ths.push_back(x);
    for (int i = 0; i < n; i++) cin >> x, bhs.push_back(x);
    for (int i = 0; i < k; i++) if (!bhs[i]) point += ths[i];
    for (int i = 0; i < n; i++) if (bhs[i]) initial += ths[i];
    int maxx = point;
    for (int i = 1; i < (n - k + 1); i++) {
        if (!bhs[i - 1]) point -= ths[i - 1];
        if (!bhs[i + k - 1]) point += ths[i + k - 1];
        maxx = max(maxx, point);
    }
    cout << (initial + maxx);
}