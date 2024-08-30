#include <iostream>
#include <stdexcept>

#define INT_MAX 1000 // maximum size of a int is 2147483647

void calculator(int a, int b);
void calculate(float a, float b);
float div(float a, float b);


int main()
{
	/*float a[2];
	for (int i = 0; i < 2; ++i)
	{
		std::cout << "Please input number " << i+1 << ": ";
		std::cin >> a[i];
		std::cout << std::endl;
	}
	std::cout << "Number 1 is " << a[0];
	std::cout << "\nNumber 2 is " << a[1];*/
	int a, b;
	std::cout << "Please input number 1: ";
	std::cin >> a;
	std::cout << "\nPlease input number 2: ";
	std::cin >> b;
	std::cout << "\n\n\n";

	
	calculator(a,b);

	float x = 100, z = 0;
	try
	{
		calculate(x, z);

	}
	catch(const char* e)
	{
		std::cout << " - exceptia aruncata este: " << e << std::endl;
	}
}

void calculator(int a, int b)
{
	std::cout << "What do you chose to do: \n";
	std::cout << "1.(ADD) 2.(SUBSTRACT) 3.(MULTIPLY) 4.(DIVIDE) \n";
	std::cout << "\nintput -> ";
	int k=0;
	std::cin >> k;
	switch (k)
	{
	case 1: 
		try
		{
			if (a >= INT_MAX || b >= INT_MAX)
				throw "MAXIMUM SIZE EXCEEDED..";
			std::cout << "The two numbers added togheter result in: " << a + b;
		}
		catch (const char* msg)
		{
			std::cout << "ERROR: " << msg;
		}
		break;
	case 2:
		try
		{
			if (a >= INT_MAX || b >= INT_MAX)
				throw "MAXIMUM SIZE EXCEEDED..";
			std::cout << "The two numbers substracted result in: " << a - b;
		}
		catch (const char* msg)
		{
			std::cout << "ERROR: " << msg;
		}
		break;
	case 3:
		try
		{
			if (a >= INT_MAX || b >= INT_MAX)
				throw "MAXIMUM SIZE EXCEEDED..";
			std::cout << "The two numbers multiplied togheter result in: " << a * b;
		}
		catch (const char* msg)
		{
			std::cout << "ERROR: " << msg;
		}
		break;
	case 4:
		try
		{
			if (b == 0 || a >= INT_MAX || b >= INT_MAX)
				throw "Division by zero forbiden.. black hole evaded..";
			std::cout << "The two numbers divided result in: " << a / b;
		}
		catch (const char* msg)
		{
			std::cout << "ERROR: " << msg;
		}
		break;
	default :
		std::cout << "Option not existent..";
		break;
	}
	std::cout << "\n\n\n";
}

float div(float a, float b)
{
	if (b == 0)
		throw "Impartire la zero imposibila";
	return a / b;
}
void calculate(float a, float b)
{
	try
	{
		double res = div(a, b);
		std::cout << "Rezultatul este= " << res << std::endl;
	}
	catch (const char* e)
	{
		std::cout << "Exceptia a fost prinsa in functia calculate: " << e;
		throw; // re-arunca exceptia
	}
}
