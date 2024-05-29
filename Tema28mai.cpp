#include<iostream>

using namespace std;

int return_max(int x[],int n)
{
	
	int maxim = x[0];
	for (int i = 0; i < n; ++i)
	{
		if (x[i] > maxim)
		{
			maxim = x[i];
			}
	}
	return maxim;
}

int minim(int x[], int n)
{
	int min = x[0];
	for (int i = 1; i < n; ++i)
	{
		if (x[i] < min)
		{
			min = x[i];
		}
	}
	return min;
}

bool check(int x[])
{
	int n;
	cout << "ce numar cautati?: ";
	cin >> n;
	for (int i = 0; i != n; ++i)
	{
		if (n == x[i])
		{
			return true;
		}
	}
	return false;
}

int counter(int x[])
{
	int n;
	cout << "ce element vreti sa scanati?: ";
	cin >> n;
	int k = 0;
	for (int i = 0; i <= n; ++i)
	{
		if (x[i] == n)
		{
			++k;
		}
	}
	cout << k << " elemente se afla in array" << endl;
	return 0;
}


int  main()
{
	int n = 10;
	int x[10] = { 1,-12,3,3,-5,60,7,28,9,10 };
	cout << "Cel mai mare numar din array este " << return_max(x, n) << endl;
	if (check(x))
	{
		cout << "numarul se afla in array" << endl;
	}
	else
	{
		cout << "item invalid" << endl;
	}
	counter(x);
}
