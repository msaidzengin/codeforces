#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int x;
	int nums[100];
	cin >> x;

	for (int i = 0; i < x; i++)
		cin >> nums[i];

    int divided[100] = { };
    sort(nums, nums + x);
    int count = 0;

    for (int i = 0; i < x; i++) {
        if (divided[i] == 1)
            continue;
        divided[i] = 1;
        count++;
        for (int j = i + 1; j < x; j++)
            if (nums[j] % nums[i] == 0)
                divided[j] = 1;
    }

    printf("%d\n", count);
	return 0;
}