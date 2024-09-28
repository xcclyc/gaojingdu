#include <bits/stdc++.h>
using namespace std;
int a[1000], b[1000], c[1000], d[1000];
int jian(int a[], int b[])
{
	d[0] = a[0];
	for (int i = 1;i <= a[0];i++)
	{
		d[i] = a[i] - b[i];
	}
	for (int i = 1;i <= a[0];i++)
	{
		if (d[i] < 0)
		{
			d[i] += 10;
			d[i + 1] -= 1;
		}
	}
	for (int i = d[0];i > 0;i--)
	{
		if (d[i] != 0)
		{
			break;
		}
		d[0]--;
	}
}
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
	jian(a, b);
	for (int i = d[0];i >= 1;i--)
	{
		cout << d[i];
	}
}