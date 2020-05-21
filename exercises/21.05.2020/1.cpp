#include<cstdio>
#include<iostream>
#include<stack>
using namespace std;

int main() {
	stack<char> s;
	int count = 0;
	char c;
	while (scanf("%c", &c) && c != '\n') {
		if (!s.empty() && c == s.top()) {
			s.pop();
			count++;
		} else s.push(c);
	}
	if (count % 2 == 0) cout << "No";
	else cout << "Yes";
}
