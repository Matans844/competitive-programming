#include <cstdint>
#include <algorithm>
#include <iostream>

using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(false);
	int n, m, s;
	cin >> n >> m >> s;
	int l = 0, r = 60, ans = -1, mid;
	while (l < r)
	{
		mid = (l + r) >> 1;
		if (1 << mid >= n - 1) ans = mid, r = mid;
		else l = mid + 1;
	}
	cout << ans * s + (n - 1) * m << endl;
	return 0;
}
