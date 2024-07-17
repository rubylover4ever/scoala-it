#include <iostream>
#include <vector>
#include <string>

class Recipe
{
public:
	Recipe(std::string n, std::string ing, std::string inst, std::string rev)
	{
		//std::string n, ing, inst, rev;
		std::cout << "Recipe name: ";
		std::getline(std::cin, n);
		std::cout << "Recipe ingredients: ";
		std::getline(std::cin, ing);
		std::cout << "Recipe instructions: ";
		std::getline(std::cin, inst);
		std::cout << "Recipe review: ";
		std::getline(std::cin, rev);
		this->name = n;
		this->ingredients = ing;
		this->instructions = inst;
		this->review = rev;
	}
	void display()
	{
		std::cout << "\nThe name of the recipe is: " << name << std::endl;
		std::cout << "\nThe ingredients are as follows: " << std::endl << ingredients << std::endl;
		std::cout << "\nThe instructions: " << std::endl << instructions << std::endl;
		std::cout << "\nReview: " << review << std::endl;
	}
private:
	std::string name, ingredients, instructions, review;	
};


int main()
{
	std::string name, ing, inst, rev;
	Recipe r1(name, ing, inst, rev);
	r1.display();
}
