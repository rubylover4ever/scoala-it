#include<iostream>
#include<vector>

using namespace std;
int lungime(string v, int index);
int majuscul(string v, int index);
bool prim(int n,int i);

int main()
{
	string sir = { "bcdefAghij" };
	cout << lungime(sir, 1) << endl;
	cout << majuscul(sir, 0)<< endl;

	if (prim(7, 2))
		cout <<"este nr prim";
	else
		cout << "nu este nr prim";
}

// EX 1
//scrie un program care sa calculeze lungimea unui sir
//de caractere folosind recursivitatea 
int lungime(string v, int index)
{
	if (v[index] == '\0')
		return 1;
	
		return 1+lungime(v,index+1);
}

//EX 2
//Scrie un program care sa gaseasca prima litera majuscula
//dintr-un sir de caractere folosind iteratia/recursivitatea
int majuscul(string v, int index)
{
	char lit = v[index];
	if (v[index] == '\0')
		return 0;
	
	if (isupper(v[index]))
		return lit;

	return majuscul(v, index + 1);
}

//EX 3
//Scrie un program care sa verifice daca un numar 
//este prim, folosind recursivitatea
bool prim(int n, int i)
{
	if (n == 1 || n == 0)
		return false;
	if (i <= n / 2)
		if (n % i == 0)
			return false;
	return true;
}
