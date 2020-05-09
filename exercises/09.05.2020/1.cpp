#include <iostream>
#include <string>
#include <list>
using namespace std;

int main() {

    int x;
    string colors;

    cin >> x;
    cin >> colors;

    list<int> counts;
    int count = 0;

    for (int i = 0; i < colors.size(); i++) {
        if (colors[i] == 'B') {
            count++;
        } else {
            if (count != 0) {
                counts.push_back(count);
                count = 0;
            }
        }
    }
    if (count != 0) counts.push_back(count);
    cout << counts.size() << "\n";
    for (auto const& i : counts) {
        cout << i << " ";
    }
    cout << "\n";
}
