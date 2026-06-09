#include <iostream>
#include "hola_mundo.hpp"

int main()
{
	int	age;
	int	len;
	std::string name;

	age = 2;
	std::cout << "please, enter your name: ";
	std::getline(std::cin, name);
	//std::cin >> name;
	len = name.length();
	std::cout << "length name is: " << len << std::endl;
	std::cout << "Hola " << name << std::endl;
	std::cout << "Edad: " << age << std::endl;

	Dog dog;
	std::cout << "please, enter your dog's name: ";
	std::getline(std::cin, dog.name);
	std::cout << "Hello " << name << " & "<< dog.name << std::endl;
	dog.age = 5;
	dog.bark();

	BankAccount account1;
	account1.balance = 100;
	std::cout << "your account balance is: " << account1.balance << std::endl;
	std::cout << "your account balance now is: " << account1.added(balance)<< std::endl;
}


