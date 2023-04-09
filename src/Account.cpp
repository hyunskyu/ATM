#include "Account.h"

#include <string.h>
#include <iostream>

Account::Account()
	: mid(0)
	, mcount(0)
	, mname(nullptr)
	, mcash(0)
	, msize(0)
{

}
Account::Account(const char* name)
	: mid(0)
	, mcount(0)
	, mcash(0)
	, msize(strlen(name) + 1)
{

	mString = new char[msize];
	memcpy(mString, name, msize);
	mname = new std::string(mString);

}
Account::Account(const Account& other)
	: mid(other.mid)
	, mcount(other.mcount)
	, mname(other.mname)
	, mcash(other.mcash)
	, msize(other.msize)
{
	mString = new char[other.msize];
	memcpy(mString, other.mname, other.msize);
	mname = new std::string(other.mString);
	mcount = other.mcount;
	mcash = other.mcash;
	mpin = other.mpin;
}
Account& Account::operator=(const Account& rhs)
{
	if (this == &rhs)
	{
		return *this;
	}
	delete[] mString;
	delete mname;

	this->mString = new char[rhs.msize];
	memcpy(this->mString, rhs.mString, rhs.msize);
	this->mname = new std::string(rhs.mString);
	this->mcount = rhs.mcount;
	this->mcash = rhs.mcash;
	this->mpin = rhs.mpin;


	return *this;

}


void Account::Deposit(const unsigned int m)
{
	std::cout << "You deposit money " << m << std::endl;
	mcash += m;
	std::cout << "The money account is " << mcash << std::endl;


}
void Account::Withdrawal(const unsigned int m)
{

	if (mcash < m) {
		std::cout << "Not enough money" << std::endl;
	}
	else {
		std::cout << "You withdrawal money " << m << std::endl;
		mcash -= m;
		std::cout << "The money in account is " << mcash << std::endl;
	}
}

unsigned int Account::GetCash() const
{

	return mcash;
}
const std::string& Account::GetName() const
{
	return *mname;
}

Account::~Account() //Destructor 
{
	delete[] mString;
	delete mname;

}