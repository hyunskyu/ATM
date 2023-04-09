
#pragma once

#include <string>
#include <iostream>

class Account
{
public:
	Account();//Default constructor
	~Account();
	Account(const char* name); //Constructor
	Account(const Account& other); //Copy constructor
	Account& operator=(const Account& rhs); // ' = ' operator
	void Deposit(const unsigned int m); //Deposit money
	void Withdrawal(const unsigned int m); //Withdrawal money
	unsigned int GetCash() const; //Get the money in account
	const std::string& GetName() const; // Get accounter's name


	char* mString;
	/*======= Just for test =======*/

	unsigned int mpin; //Pin number
	unsigned int mid; // ID
	unsigned int mcash; //Current cash 

private:


	//unsigned int mpin; //Pin number
	//unsigned int mid; // ID
	unsigned int mcount; //Number of account 
	std::string* mname; // Name
	//unsigned int mcash; //Current cash 
	unsigned int msize; //Name size


};
