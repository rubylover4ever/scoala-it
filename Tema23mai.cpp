#include<stdio.h>
#include<iostream>

using namespace std;

bool nr_prime(int n)
{
		int i = 2;
		do {
			if (n % i == 0)
				return false;
			i++;
		} while (i <= n - 1);
		return true;
}

int afisare_prim()
{
int nr;
do {
	cout << "Numar: ";
	cin >> nr;
	if (nr == 0) 
	{
		break;
	}
	if (nr_prime(nr)) 
	{
		cout << "Numarul " << nr << " este prim." << endl;
	}
	else cout << "Numarul " << nr << " NU este prim." << endl;
} while (nr != 0);
return 0;
}

int suma()
{
	int x = 0;
	int suma = 0;
	std::cout << "Numar ";
	cin >> x;
	if (x > 0)
	{
		while (x >= 10)
		{
			suma += x % 10;
			x = x / 10;
		}
		suma += x;
		
	}
	else
	{
		suma = x;
	}
	cout << "suma este: " << suma << endl;
	return suma;
}

int produs ()
{
	int x = 0;
	int produs = 1;
	std::cout << "Numar ";
	cin >> x;
	if (x > 0)
	{
		while (x >= 10)
		{
			produs *= x % 10;
			x = x / 10;
		}
		produs *= x;
	}
	else
	{
		produs = x;
	}
	cout << "produsul este: " << produs << endl;
	return produs;
}

int numaratoare_inversa()
{
	int n;
	cout << "De unde sa inceapa numaratoarea inversa: ";
	cin >> n;
	do
	{
		for (int i = 1;i <= n;)
		{
			n -= 1;
			cout << n << endl;
		}
	} while (n == 0);
	return 0;
}

int calculator()
{
	int rez;
	int baza;
	int exponent;
	cout << "baza: ";
	cin >> baza;
	cout << "exponent: ";
	cin >> exponent;
	rez = baza;
	do
	{
		rez *= baza;
		--exponent;
	} while (exponent > 1);

	cout << rez;
	return 0;
}

int produs_input()
{
	int n;
	int calcul = 0;
	do
	{
		cout << "introduceti numere pt calcul: ";
		cin >> n;
		calcul += n; 
	} while (n != 0);

	cout << calcul;
	return 0;
}
int factori_primi()
{
	int n;
	int i = 2;
	int x;
	cout << "Introduceti un numar: ";
	cin >> n;
	if (n <= 3)
	{
		cout << "Introduceti un numar mai mare" << endl ;
		return 1;
	}
	else
	{
		cout << "factorii primi a lui " << n << " sunt: ";
	}
	while (n > 3)
	{
		if (n % i == 0)
		{
			x = 0;
			while (n % i == 0)
			{
				++x;
				n /= i;
			}
			cout << i << "^" << x << " ";
		}
		i++;
	}
}

int toBinary_convertor()
{
	int n;
	cout << "introduceti un numar in zecimal: ";
	cin >> n;
	do
	{
		if(n % 2 == 0)
		{
			cout << "0";
		}
		else
		{
			cout << "1";
		}
		n /= 2;
	} while (n >= 1);
	return 0;
}

int main()
{
	//afisare_prim();
	//suma();
	//produs();
	//numaratoare_inversa();
	//calculator();
	//produs_input();
	//factori_primi();
	//toBinary_convertor();
}
