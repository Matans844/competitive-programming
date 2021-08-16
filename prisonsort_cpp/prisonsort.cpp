#include <cstdio>
#include <algorithm>
#include <iostream>

using namespace std;

vs V[255];

int main(void)
{
	int N;
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		string a;
		int b;
		cin >> a >> b;
		V[b].pb(a);
	}
	int val = 1; // place
	for (int i = 0; i < 255; i++)
	{
		if (!V[i].size()) continue;
		sort(all(V[i]));
		for (int j = 0; j < V[i].size(); j++)
		{
			cout << V[i][j] << " ";
		}
		cout << val << " " << val + V[i].size() - 1 << endl;
		val += V[i].size();
	}
	return 0;
}
