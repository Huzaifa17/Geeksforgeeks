#include <bits/stdc++.h>
using namespace std;

vector<int> sieveOfErat(int N)
{
	int arr[N + 1] = {0};
	int i, j, k;
	std::vector<int> v;
	if (N < 2)
	{
		return v;
	}
	v.push_back(2);
	for (i = 3; i <= N; i += 2)
	{
		if (!arr[i])
		{
			v.push_back(i);
			for (j = i * i; j <= N; j = j + (2 * i))
			{
				arr[j] = 1;
			}
		}
	}
	return v;
}
int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int i, j, k, n, m, t;
	cin >> n;
	vector<int >v2 = sieveOfErat(n);
	return 0;
}
