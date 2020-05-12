#include <iostream>
#include <string>
using namespace std;

int main() {
    string x;
    cin >> x;

    long long int index = 0, right = 0, left = 0, count = 0;
    for (int i = 0; i < x.length(); i++) {
        if (x[i] == '^') {
            index = i;
            break;
        }
    }
    count = index;
    for (int i = 0; i < index; i++) {
        if (x[i] != '=') {
            left += (x[i] - '0') * count;
        }
        count--;
    }
    count = 1;
    for (int i = index + 1; i < x.length(); i++) {
        if (x[i] != '=') {
            right += (x[i] - '0') * count;
        }
        count++;
    }
    if (left == right)
        cout << "balance";
    else if (left > right)
        cout << "left";
    else
        cout << "right";
}