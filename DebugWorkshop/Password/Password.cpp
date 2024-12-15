#include <iostream>

struct Password
{
	char value[16];
	bool incorrect;
	Password() : value(""), incorrect(true)
	{
	}
};

int main()
{
	std::cout << "Enter your password to continue:" << std::endl;
	Password pwd;
	std::cin >> pwd.value; // puts the input into the pwd.value and null after it, and the incorrect bool is located right after the pwd.value in the memory so when you enter 16 chars the next byte is automatically 0 ergo incorrect = flase

	if (!strcmp(pwd.value, "********")) 
		pwd.incorrect = false;

	if(!pwd.incorrect)
		std::cout << "Congratulations\n";

	return 0;
}
