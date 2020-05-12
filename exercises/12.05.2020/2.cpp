#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int x;
	cin >> x;
	int *nums = new int[x];
	int map[100];
	for (int i = 0; i < 100; i++) map[i] = 0;

	for (int i = 0; i < x; i++) {
		cin >> nums[i];
		map[nums[i] - 1]++;
	}
	sort(map, map + 100);
	sort(nums, nums + x);
	if (map[99] == map[98] && map[99] == x / 2) {
		cout << "YES" << "\n";
		cout << nums[0] << ' ' << nums[x - 1];
	}
	else {
		cout << "NO";
	}
}