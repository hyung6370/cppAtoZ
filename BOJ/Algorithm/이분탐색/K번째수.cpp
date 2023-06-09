#include <iostream>
#include <algorithm>

using namespace std;

int N, k;

int main(void)
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	cin >> N >> k;

	int left = 1, right = k, mid;
	int res = 0;

	while (left <= right) {
		mid = (left + right) / 2;

		int cnt = 0;
		for (int i = 1; i <= N; i++) {
			cnt += min(N, mid / i);
		}

		if (cnt >= k) {
			res = mid;
			right = mid - 1;
		}
		else {
			left = mid + 1;
		}
	}

	cout << res << '\n';

	return 0;
}