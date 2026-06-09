#include <iostream>

class Dog
{
	public:
	std::string name;
	int age;
	void bark()
	{
		std::cout << "Woof!" << std::endl;
	}
};

class BankAccount
{
	private:
	int	balance;
	int added(int balance)
	{
		return (balance + 10);

	}
};
