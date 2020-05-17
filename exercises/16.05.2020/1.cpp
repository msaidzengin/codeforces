#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;

    for (int i = 0; i < str.size(); i++) {
        string sub = str.substr(i, 3);
        sort(sub.begin(), sub.end());
        if (sub == "ABC") {
            cout << "Yes" << "\n";
            return 0;
        }
    }
    cout << "No" << "\n";
}