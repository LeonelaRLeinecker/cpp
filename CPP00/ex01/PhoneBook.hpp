#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "Contact.hpp"

class PhoneBook {
	private:
	int _index;
	int _count;
	Contact _Contact[8];
	std::string parseInput(std::string str);
	void shortPrint();
	void fullPrint(int index);

	public:
	PhoneBook();
	~PhoneBook();
	void addContact();
	void searchContact();
	
};
#endif