#include <iostream>
#include <vector>
//============================Implementarea stivei cu vector=======================================
class Stack
{
	std::vector<int> v;
	public:

	void push(int e)
	{
		v.push_back(e);
	}

	int pop()
	{
		if (v.empty())
		{
			std::cout << "The stack is empty\n";
			return '\0';
		}
		else
		{
			int temp = v.back();
			v.pop_back();
			return temp;
		}
	}

	int top()
	{
		if (v.empty())
		{
			std::cout << "The stack is empty\n";
			return -1;
		}
		else
		{
			return v.back();
		}
	}

	bool isEmpty()
	{
		return v.empty();
	}

	void afisare()
	{
		for (int i = v.size() - 1; i >= 0; --i)
		{
			std::cout << v[i] << std::endl;
		}
	}

};

//==========================================TEMA nr 1(Exercitiul 5)============================================ 
void sorter3point0(std::vector<int>& v)
{
	int temp;
	for (int i = 0; i < v.size(); ++i)
	{
		if (v[i] > v.back())
		{
			place_in(i, v, v.back());
		}
	}
	
	for (int i = v.size() - 1; i >= 0; --i)
	{
		try
		{
			if (i + 1 >= v.size())
				throw "Out of bounds";
			if (v[i] > v[i + 1])
			{
				temp = v[i];
				v[i] = v[i + 1];
				v[i + 1] = temp;
			}
		}
		catch (const char* m)
		{
			std::cout << "ERROR: " << m << std::endl;
		}
	}
}

void place_in(int n, std::vector<int>& v, int push)
{
	                                                    
	std::vector<int> placeholder;

	                                                    
	for (int i = v.size()-1; i>n-1 ; --i)
	{
		placeholder.push_back(v.back());
		v.pop_back();
	}
					
	v.push_back(push);

	for (int i = placeholder.size() - 1; i >= 0; --i)
	{
		if (push != placeholder[i])
		{
			v.push_back(placeholder.back());
			placeholder.pop_back();
		}
	}
}

//============================AFISARE=====================================================
void afisare(std::vector<int> v)
{
	for (int i = v.size() - 1; i >= 0; --i)
	{
		std::cout << v[i] << " elem nr " << i << std::endl;
	}
	std::cout << std::endl;
}

//=================================Tema nr 2(EXercitiul 6)========================================


//================================MAIN===============================================
int main()
{
  std::vector<int>vec = { 10,32,21,2,19,6};
  //rezultat tema nr 1
  sorter3point0(vec);
  afisare(vec);
  //rezultat tema nr 2
}
