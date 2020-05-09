#include<iostream>
#include<algorithm>
using namespace std;

int nums[300000];

int main() {
	int x;
	long long int sum = 0;

	cin >> x;
	for (int i = 0; i < x; i++)
		cin >> nums[i];

	sort(nums, nums + x);
	for (int i = 0; i < x / 2; i++) {
		int temp = nums[i] + nums[x - 1 - i];
		sum += temp * temp;
	}
	cout << sum;

	return 0;
}