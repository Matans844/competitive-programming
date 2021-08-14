#include <cstdint>
#include <algorithm>
#include <iostream>
#include <vector>
#include <stdio.h>
#include <set>

#define int int64_t
#define loop(i,s,e) for(int i=s;i<e;++i)
#define vi vector<int>

using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(false);
	int n, m, t;
	cin >> n >> m;
	vi a(n);
	loop(i, 0, n) cin >> a[i];
	set<int> s;
	loop(i, 0, m) cin >> t, s.insert(t);
	loop(i, 0, n)
	{
		while (s.size() && *s.begin() < a[i])
		{
			cout << *s.begin() << " ";
			s.erase(s.begin());
		}
		cout << a[i] << " ";
	}
	while (s.size())
	{
		cout << *s.begin() << " ";
		s.erase(s.begin());
	}
	cout << endl;
	return 0;
}
