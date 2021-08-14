#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>

#define int int64_t
#define loop(i,s,e) for(int i=s;i<e;++i)
#define vi vector<int>
#define pb push_back
#define all(x) x.begin(), x.end()

using namespace std;

void solve()
{
	int n, k;
	cin >> n >> k;
	vi a(n);
	loop(i, 0, n) cin >> a[i];
	sort(all(a));
	vi dif(n - 1, 0);
	loop(i, 0, n - 1) dif[i] = a[i] - a[i + 1];
	sort(all(dif));
	int ans = a[n - 1] - a[0];
	loop(i, 0, k - 1) ans += dif[i];
	cout << ans << endl;
}

int32_t main()
{
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	ios_base::sync_with_stdio(false);
	int t;
	cin >> t;
	loop(i, 0, t) solve();
	return 0;
}
