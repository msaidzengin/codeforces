#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int x;
    int months[12];
    cin >> x;

    for (int i = 0; i < 12; i++)
        cin >> months[i];

    sort(months, months + 12);
    int count = 0;
    int ans = 0;

    for (int i = 11; i >= 0; i--) {
        if (count >= x) {
            break;
        }
        count += months[i];
        ans++;
    }
    if (count >= x)
        cout << ans << "\n";
    else
        cout << -1 << "\n";
}