#include <bits/stdc++.h>
using namespace std;
int a[1000], b[1000], c[1000];
int ma(int a[], int b[])
{
	if (a[0] > b[0])
	{
		return 0;
	}
	else if (a[0] < b[0])
	{
		return 1;
	}
	else
	{
		for (int i = a[0];i > 0;i--)
		{
			if (a[i] > b[i])
			{
				return 0;
			}
			else if (a[i] < b[i])
			{
				return 1;
			}
		}
	}
	return 2;
}
int main()
{
	char d[1000], e[1000];
	cin >> d >> e;
	a[0] = strlen(d);
	b[0] = strlen(e);
	for (int i = 1;i <= a[0];i++)
	{
		a[i] = d[a[0] - i] - '0';
	}
	for (int i = 1;i <= b[0];i++)
	{
		b[i] = e[b[0] - i] - '0';
	}
	cout << ma(a, b);
}