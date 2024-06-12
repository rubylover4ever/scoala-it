#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void ex6()
{
	vector<int> v = { 10,20,30,40,50 };
	v.insert(v.begin()+2,25);
	for (auto el : v)
	{
		cout << el << " ";
	}
}

void ex7()
{
	int sum = 0;
	vector<int> v = { 2,4,6,8,10 };
	for (auto el : v)
	{
		sum += el;
	}
	cout << sum ;
}

void ex8()
{
	vector<int> vec = {1,2,3,4,5};
	reverse(vec.begin(), vec.end());
	for (auto el : vec)
	{
		cout << el << " ";
	}
}

void ex9()
{
	vector<int> vec = { 1,1,2,2,3,3,4,4,5 };
	for (auto el : vec)
	{
		cout << el << " ";
	}
	cout << endl;
	auto it = unique(vec.begin(), vec.end());
	vec.erase(it, vec.end());
	for (auto el : vec)
	{
		cout << el << " ";
	}
}


int main()
{
	//ex6();
	//ex7();
	//ex8();
	ex9();
}
