#include <iostream>
#include <memory>

int main()
{
	//EX 1
	std::unique_ptr<int> ptr_unic = std::make_unique<int>(10);
	std::cout << "Pointer unic: " << *ptr_unic << std::endl;


	//EX 2
	std::unique_ptr<std::string>str_ptr = std::make_unique<std::string>("Paul");
	std::unique_ptr<std::string>str_ptr2 = move(str_ptr);
	str_ptr.reset(new std::string("a new name needs to be chosen"));
	std::cout << "Pointer nr 1: " << *str_ptr << std::endl;
	std::cout << "Pointer nr 2: " << *str_ptr2 << std::endl;
	
	//EX 3
	std::shared_ptr<double> dbl_ptr = std::make_shared<double>(1.7);
	std::shared_ptr<double> dbl_ptr2 = dbl_ptr;
	std::shared_ptr<double> dbl_ptr3 = dbl_ptr;
	std::shared_ptr<double> dbl_ptr4 = dbl_ptr;
	std::cout << "Shared pointers: " << dbl_ptr.use_count() << std::endl;
}
