#include <iostream>

using namespace std;

void checkVocala(char litera)
{
	if (litera == 'a' || litera == 'e' || litera == 'i' || litera == 'o' || litera == 'u')
	{
		cout << "Litera este o vocala!";
	}
	else
	{
		cout << "Litera este o consoana..";
	}
	cout << endl;
}

void anotimpLuna(int nr)
{
	

	if (nr == 1 || nr == 2 || nr == 12)
	{
		cout << "iarna";
	}
	else if (nr == 6 || nr == 7 || nr == 8 ) 
	{
		cout << "vara";
	}
	else if (nr == 9 || nr == 10 || nr == 11)
	{
		cout << "toamna";
	}
	else if (nr == 3 || nr == 4 || nr == 5)
	{
		cout << "primavara";
	}
	cout << endl;
}



int main(void)
{
	char a;
	cout << "introduceti o litera: ";
	cin >> a;
	checkVocala(a);
 
	int nrLuna;
	cout << "introduceti o luna numerica: ";
	cin >> nrLuna;
	anotimpLuna(nrLuna);
}
