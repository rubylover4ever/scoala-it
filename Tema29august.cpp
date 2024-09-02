#include <iostream>
#include <vector>
//============================Implementarea stivei CU vector=======================================
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
//==========================================Implementarea Stivei FARA vector==================================
#define MAX 6
class Stiva
{
	int arr[MAX];
	int top;
public:
	Stiva()
	{
		int value;
		for (int i = 0; i < MAX; ++i)
		{
			std::cout << "Please enter value at num: " << i << std::endl;
			std::cin >> value;
			arr[i] = value;
		}
		top = MAX-1;
		
	}

	int size()
	{
		return sizeof(arr);
	}

	void push(int elem)
	{
		if (top < (MAX))
		{
			arr[++top] = elem;
		}
		else
		{
			std::cout << "full";
		}
	}
	int pop()
	{
		if (top == -1)
		{
			std::cout << "gol";
			return -1;
		}
		else
		{
			int temp = arr[top];
			arr[top--] = 0;
			return temp;
		}
	}
	int top_n()
	{
		if (top == -1)
		{
			std::cout << "gol";
			return -1;
		}
		else
		{
			return arr[top];
		}
	}
	bool isEmpty()
	{
		return (top < 0);
	}
	bool isFull()
	{
		return (top >= (MAX - 1));
	}
	int at(int i)
	{
		return arr[i];
	}
	void afisare()
	{
		for (int o = 0; o <= top; ++o)
		{
			std::cout << arr[o] << std::endl;
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
bool palindrom(std::string v)
{
	int k = v.size() - 1;
	for (int i = 0; i < v.size() / 2; ++i)
	{
		if(v[i] != (',', '.', '?', '!', ' ') )
		{
			if (tolower(v[i]) != tolower(v[k]))
			{
				return false;
			}
		}
		--k;
	}
}

// functia fara "tolower":
// 
// in tabela ASCII valorile noastre sunt: 
// 65 ...  90 = A ... Z
// 97 ... 122 = a ... z
// 
// dif dintre literele mari si cele mici este de:
//   A - a  = +(-dif)
//  65 - 97 = +(-32)
// 
// deci, daca vreau sa fac compararea intre 'A' si 'a' sa rezulte egal
// trebuie sa verific daca diferenta intre ele este de +-32


//================================MAIN===============================================
int main()
{
  std::vector<int>vec = { 10,32,21,2,19,6};
  //rezultat tema nr 1
  sorter3point0(vec);
  afisare(vec);
  //rezultat tema nr 2
 std::string str = "a L.upu.l a";
if (palindrom(str))
{
	std::cout << "palindrom";
}
else 
{
	std::cout << "not palindrom";
}

}
