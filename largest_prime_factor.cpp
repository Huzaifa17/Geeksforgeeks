#include <bits/stdc++.h>
using namespace std;

long long int largestPrimeFactor(int N)
{
	// code here
	int arr[N + 1] = {0};
	int i, j, k, m;
	if (N < 2)
	{
		return 0;
	}
	for (i = 4; i <= N; i += 2)
	{
		arr[i] = 1;
	}
	for (i = 3; i * i <= N; i += 2)
	{
		if (!arr[i])
		{
			/* code */
			for (j = i * i; j <= N; j += (2 * i))
			{
				arr[j] = 1;
			}
		}
	}
	for (i = N; i >= 2; i--)
	{
		if (N % i == 0 && arr[i] == 0)
		{
			return i;
		}
	}
	return 0;
}

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int i, j, k, n, m, t;
	cin >> n;
	cout << largestPrimeFactor(n);
	return 0;
}
