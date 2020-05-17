#include <iostream>
using namespace std;

int main() {
    int n, k, i, count = 0, arr[1000], x;
    cin >> n >> k;
    for (i = 0; i < n; i++) cin >> arr[i];
    for (i = 1; i < n; i++) {
        x = arr[i];
        if (arr[i] + arr[i - 1] < k) {
            arr[i] = k - arr[i - 1];
            count += arr[i] - x;
        }
    }
    cout << count << "\n";
    for (i = 0; i < n - 1; i++) cout << arr[i] << " ";
    cout << arr[n - 1] << "\n";
}