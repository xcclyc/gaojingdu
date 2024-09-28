#include <bits/stdc++.h>
using namespace std;
int a[1000], b[1000], c[1001];
int main()
{
	char d[1000], e[1000];
	cin >> d >> e;
	a[0] = strlen(d);
	b[0] = strlen(e);
	for (int i = 1;i <= a[0];i++)
	{
		a[i] = d[a[0] - i] - 48;
	}
	for (int i = 1;i <= b[0];i++)
	{
		b[i] = e[b[0] - i] - 48;
	}
	c[0] = a[0] + b[0] - 1;
	for (int j = 1;j <= b[0];j++)
	{
		int k = j;
		for (int i = 1;i <= a[0];i++)
		{
			c[k] += a[i] * b[j];
			c[k + 1] += c[k] / 10;
			c[k] = c[k] % 10;
			k++;
		}
	}
	if (c[c[0] + 1] >= 1)
	{
		c[0] += 1;
	}
	for (int i = c[0];i > 0;i--)
	{
		cout << c[i];
	}
}