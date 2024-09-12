#include <iostream>

struct Node
{
	int data;
	Node* next;
	Node(int val)
	{
		data = val;
		next = nullptr;
	}
};

void afisare(Node* nod)
{
	while (nod != nullptr)
	{
		std::cout << "element: " << nod->data << "\n";
		nod = nod->next;
	}
	std::cout << "\n";
}

int count(Node* nod)
{
	int k = 0;
	while (nod != nullptr)
	{
		++k;
		nod = nod->next;
	}
	return k;
}

Node* concatenate(Node* l1, Node* l2)
{
	Node* temp = l1;
	while (temp->next != nullptr)
	{
		temp = temp->next; 
	}
	if (l2 != nullptr)
	{
		temp->next = l2;
	}

	return l1;
}

int main()
{
	Node* First = new Node(0);

	Node* temp1 = new Node(1);
	First->next = temp1;

	Node* temp2 = new Node(5);
	temp1->next = temp2;

	Node* temp3 = new Node(30);
	temp2->next = temp3;


	Node* l2 = new Node(3);
	
	Node* tempL1 = new Node(6);
	l2->next = tempL1;

	Node* tempL2 = new Node(7);
	tempL1->next = tempL2;

	Node* tempL3 = new Node(100);
	tempL2->next = tempL3;

	afisare(First);

	std::cout << "numarul de noduri este: " << count(First)<< "\n";

	First = concatenate(First, l2);

	afisare(First);

}
