#include<iostream>

using namespace std;

void afisare(int v[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;
}


int find(int x[], int y[], int n)
{
	int k = 0;
	for (int i = 0; i <= n; i++)
	{
		if (x[i] == y[k])
		{
			cout << x[i] << " ";
		}
		if (i == n)
		{
			i = 0;
			++k;
			if (k >= n)
			{
				return 0;
			}
		}
	}
	return 0;
}

int remove(int x[],int n)
{
	int sterge = 0;
	cout << "ce numar vreti sa stergeti: ";
	cin >> sterge;
	for (int i = sterge; i < n - 1; i++)
	{
		x[i] = x[i + 1];
	}
	x[n - 1] = 0;
	n--;
	return 0;
}

int bigger(int x[], int n)
{
	float med = 0;
	for (int i = 0; i < n; i++)
	{
		med = med + x[i];
	}
	med = med / n;

	for (int i = 0; i < n; ++i)
	{
		if (x[i] > med)
		{
			cout << x[i] << " ";
		}
	}
	return 0;
}

int distinct(int x[],int y[], int n, int m)
{
	bool gasit = false;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			if (x[i] == y[j])
			{
				gasit = true;
				y[j] = 0;
			}
		}
		if (gasit == true)
		{
			x[i] = 0;
		}
		gasit = false;
	}
	return 0;
}

int frecventa(int x[], int y[], int n)
{
	int j = 0;
	int k = 0;
	for (int i = 0; i < n; ++i)
	{
		if (x[j] == y[i])
		{
			++k;
			cout << x[j] << "se repeta de " << k << " ori";
		}
		if (i == n)
		{
			++j;
		}
	}
	return 0;
}





int main()
{
	int x[] = { 1,2,2,4,3,5 };
	int y[] = { 2,3,6,2,3,3 };
	int z[] = { 3, 4 ,5, 6,3,2 };
	int new_arr[20];
	int counter = 0;
	int n = sizeof(x) / sizeof(int);
	int m = sizeof(y) / sizeof(int);
	int o = sizeof(z) / sizeof(int);
	//find(x, y, n);
	
	/*remove(x, n);
	afisare(x,n);*/
	
	//bigger(x, n);

	/*distinct(x, y, n,m);
	afisare(x, n);
	afisare(y, m);*/

	//frecventa(x, y, n);
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			if(x[i] == y[j])
			{
				for (int k = 0; k < o; ++k)
				{
					if (x[i] == z[k])
					{
						bool gasit = false;
						for (int ii = 0; ii < counter; ++ii)
						{
							if (new_arr[ii] == x[i])
							{
								gasit = true;
								break;
							}
								
						}
						if (!gasit)
						{
							new_arr[counter] = x[i];
							counter++;
						}
					}
					
				}
			}
			
		}
	}
	for (int i = 0; i < counter; i++)
	{
		cout << new_arr[i] << " ";
	}
}
