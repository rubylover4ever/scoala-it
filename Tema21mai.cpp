
#include <iostream>
#include <string>

using namespace std;


int calculus(int a)
{
	int produs = 0;
	int i = 1;
	while (i <= a)
	{
		produs += i;
		i++;
	}
	return produs;
}


int main()
{
	int numar;
	cin >> numar;
	int s = calculus(numar);
	cout << endl << s;
	return 0;
}
