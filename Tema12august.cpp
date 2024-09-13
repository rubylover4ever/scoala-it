#include <iostream>

struct Nod
{
	int val;
	Nod* urm;
	Nod(int val)
	{
		this->val = val;
		urm = nullptr;
	}
};

void afisare(Nod* head)
{
	while (head != nullptr)
	{
		std::cout << head->val << " ";
		head = head->urm;
	}
	std::cout << "\n";
}

Nod* keepNitems(Nod* head, int k)
{
	if (head == nullptr)
	{
		std::cout << "Lista este goala\n";
		return nullptr;
	}
	Nod* temp = head;
	for (int i = 1; i < k; ++i)
	{
		temp = temp->urm;
	}
	temp->urm = nullptr;
	return head;
}

Nod* deletefirstNItems(Nod* head, int k)
{
	if (head == nullptr)
	{
		std::cout << "Lista este goala\n";
		return nullptr;
	}
	Nod* replacement;
	for (int i = 0; i < k; ++i)
	{
		head = head->urm;
	}
	replacement = head;
	return replacement;
}

Nod* safefirstNItems(Nod* head, int k)
{
	Nod* prev = head;
	for (int i = 1; i < k; ++i)
	{
		head = head->urm;
	}
	head->urm = nullptr;
	return prev;
}

///////////////////////////////////////////////////////////////EX 1/////////////////////////////////////////////////////////////////////////////////////
Nod* rotate(Nod* head, int k)
{
	if (head == nullptr)
	{
		std::cout << "Lista este goala\n";
		return nullptr;
	}
	Nod* r = deletefirstNItems(head, k); //4,5,6,7
	Nod* l = safefirstNItems(head,k); //1,2,3

	Nod* temp = r;
	while (r->urm!= nullptr)
	{
		r = r->urm;
	}
	r->urm = l;

	return temp;
}

int main()
{
	Nod* head = new Nod(1);
	Nod* n1 = new Nod(2);
	Nod* n2 = new Nod(3);
	Nod* n3 = new Nod(4);
	Nod* n4 = new Nod(5);
	Nod* n5 = new Nod(6);
	Nod* n6 = new Nod(7);

	head->urm = n1;
	n1->urm = n2;
	n2->urm = n3;
	n3->urm = n4;
	n4->urm = n5; 
	n5->urm = n6; 
	

	afisare(head);

	head = rotate(head, 3);

	afisare(head);
}
