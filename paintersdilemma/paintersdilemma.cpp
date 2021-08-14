#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <queue>
#include <set>
#include <vector>

#define int int64_t
#define loop(i, s, e) for(int i=s;i<e;++i)
#define vi vector<int>
#define pb push_back
using namespace std;

const int m = 21, INF = 1e9;

void solve()
{
	int n;
	cin >> n;
	vector<queue<int>> next(m);
	vi arr(n);
	loop(i, 0, n)
	{
		cin >> arr[i];
		arr[i]--;
		next[arr[i]].push(i);
	}
	loop(i, 0, m) next[i].push(INF);
	int cnt = 0;
	int a = -1, b = -1;
	loop(i, 0, n)
	{
		next[arr[i]].pop();
		if (arr[i] == a || arr[i] == b) continue;
		cnt++;
		if (a == -1)
		{
			a = arr[i];
			continue;
		}
		if (b == -1)
		{
			b = arr[i];
			continue;
		}
		if (next[a].front() > next[b].front())
		{
			a = arr[i];
		}
		else
		{
			b = arr[i];
		}
	}
	cout << cnt << endl;
}

int32_t main()
{
	int t;
	cin >> t;
	loop(i, 0, t)
	{
		solve();
	}
	return 0;
}
