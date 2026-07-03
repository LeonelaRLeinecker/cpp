#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iomanip>
# include <iostream>

class Contact
{
	private:
	std::string _firstName;
	std::string _lastName;
	std::string _nickName;
	std::string _phoneNumber;
	std::string _darkSecret;
	public:
	//setters
	void setFirstName(std::string str);
	void setLastName(std::string str);
	void setNickName(std::string str);
	void setPhoneNumber(std::string str);
	void setDarkSecret(std::string str);
	//getters
	std::string getFirstName() const;
	std::string getLastName() const;
	std::string getNickName() const;
	std::string getPhoneNumber() const;
	std::string getDarkSecret() const;

	Contact();
	~Contact();
	
};
#endif