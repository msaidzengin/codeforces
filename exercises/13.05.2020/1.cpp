#include <iostream>
#include <stack>
using namespace std;
int route[200001];
stack<int> path;

int main() {
	int a;
	cin >> a;
	for (int i = 2; i < a + 1; i++) cin >> route[i];
	int index = a;
	while (index != 1) {
		path.push(index);
		index = route[index];
	}
	path.push(1);
	while (!path.empty()) {
		cout << path.top() << " ";
		path.pop();
	}
}