#include "Contact.hpp"

Contact::Contact(){
	this->_firstName = "";
	this->_lastName = "";
	this->_nickName = "";
	this->_phoneNumber = "";
	this->_darkSecret = "";
}

Contact::~Contact() {}

void Contact::setFirstName(std::string str) {
	_firstName = str;
}
void Contact::setLastName(std::string str) {
	_lastName = str;
}
void Contact::setNickName(std::string str) {
	_nickName = str;
}
void Contact::setPhoneNumber(std::string str) {
	_phoneNumber = str;
}
void Contact::setDarkSecret(std::string str) {
	_darkSecret = str;
}
std::string Contact::getFirstName() const {
	return _firstName;
}
std::string Contact::getLastName() const {
	return _lastName;
}
std::string Contact::getNickName() const {
	return _nickName;
}
std::string Contact::getPhoneNumber() const {
	return _phoneNumber;
}
std::string Contact::getDarkSecret() const {
	return _darkSecret;
}


