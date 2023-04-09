#include "Account.h"

#include <vector>
#include <string>

bool card_check() //verify card input
{
	return true;
}

void test()
{
	
	std::vector<Account> v_account; // Account vector
	unsigned int select_menu = 0;
	int num = 0;
	std::vector<std::string> v_name; // Name vector
	
	/*
	* This is for test
	*  =================accounter DB===============================
	*/
	int _id = 123; // card id number "123 = John" "456 = Mike" "789 = Sophia"
	int pin; // Input pin number
	Account person1("John");
	Account person2("Mike");
	Account person3("Sophia");
	Account* person = new Account;
	person1.mpin = 10; // person1 pin number 
	person2.mpin = 20; // person2 pin number
	person3.mpin = 30; // person3 pin number
	person1.mid = 123;
	person2.mid = 456;
	person3.mid = 789;
	person1.mcash = 1000000;
	person2.mcash = 10000;
	person2.mcash = 100;
	v_account.push_back(person1);
	v_account.push_back(person2);
	v_account.push_back(person3);
	v_name.push_back(person1.GetName());
	v_name.push_back(person2.GetName());
	v_name.push_back(person3.GetName());
	
	/*
*  ==========================================================================
*/
	
	//std::cout<<v_account[0].mid<<std::endl;
	if (card_check()) {

	
		for (int i = 0; i < v_account.size(); i++)
		{
			if (_id == v_account[i].mid)
			{
				
				person = &v_account[i];
				std::cout<<"in"<<std::endl;
				num = i;
				break;
			}
		}

		std::cout << "Card in!" << std::endl;
		std::cout << "PIN number ";

		std::cin >> pin;

		if (person->mpin != pin)
		{
			std::cout << "Wrong pin number" << std::endl;
			return;
		}
		else {

			std::cout << "Hello "<<v_name[num] << " how can I help you ? " << std::endl;

		}

		while (1)
		{
			std::cout<<"--------------------------"<<std::endl;
			std::cout << "Please select the menu" << std::endl;
			std::cout << "1. Show money" << std::endl;
			std::cout << "2. Deposit money" << std::endl;
			std::cout << "3. Withdrawal money" << std::endl;
			std::cout << "4. exit" << std::endl;

			std::cin >> select_menu;

			if (select_menu == 1)
			{
				std::cout << "Money in account " << person->GetCash() << std::endl;
			}
			else if (select_menu == 2)
			{
				unsigned int d = 0;
				std::cout << "How many deposit? " << std::endl;
				std::cin >> d;
				person->Deposit(d);
			}

			else if (select_menu == 3)
			{
				unsigned int w = 0;
				std::cout << "How many deposit? " << std::endl;
				std::cin >> w;
				person->Withdrawal(w);
			}
			else if (select_menu == 4)
			{
				std::cout << "Exit" << std::endl;
				return;
			}


		}
	}
	else {
		std::cout << "There is no card" << std::endl;
		return;
	}


}

int main(int argc, char *argv[])
{
	test();

}