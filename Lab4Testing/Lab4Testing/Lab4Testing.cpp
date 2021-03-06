#include "pch.h"
#include "ATM.h"
#include <iostream>
#include <cstdlib>
#include "windows.h"

using namespace std;

void selection(ATM);

void selection(ATM x) {
	int choice;
	int amount;

	cout << "Insert choice :" << endl;

	if (x.getAN() != 0) {
		cout << "1. Deposit" << endl;
		cout << "2. Withdraw" << endl;
		cout << "Selection : "; cin >> choice;

		switch (choice) {
			case 1:
				cout << "Please insert the amount you want to deposit : RM";
				cin >> amount;
				cout << "New balance for your account is RM" << x.Deposit(amount, choice) << endl;
				break;
			case 2:
				cout << "Please insert the amount you want to withdraw : RM";
				cin >> amount;
				cout << "New balance for your account is RM" << x.Withdrawal(amount, choice) << endl;
				break;
			default:
				cout << "Invalid setting. Try again later." << endl;
		}
	}
	else {
		cout << "No can do.. You do not own an account number." << endl;
		cout << "Please register an account number first. Thanks." << endl;
	}
}

int main()
{
	int acc_no = rand() % 30 + 1;
	double money;
	int choice;

	string name;
	cout << "Hi, this is the register page" << endl;
	cout << "Your account number will be " << acc_no << endl;
	cout << "Kindly insert your username : "; cin >> name;
	cout << "Kindly insert the amount of money you want to put in your account (Min:RM100): RM";
	cin >> money;
	while (money < 100.00) {
		cout << "No can do... Minimum is RM100" << endl;
		cout << "Kindly insert the amount of money you want to put in your account (Min:RM100): RM";
		cin >> money;
	}

	ATM a(acc_no, name, money);
	cout << "Please wait..." << endl << endl;
	Sleep(5000);
	cout << "Account created successfuly." << endl << endl;

	cout << "Do you wish to perform transaction?" << endl;
	cout << "1. Yes\n2. No" << endl;
	cout << "Selection : "; cin >> choice;
	
	switch (choice) {
		case 1:
			selection(a);
			break;
		case 2:
			cout << "Thanks for register with us." << endl;
			cout << "See you next time." << endl;
			break;
		default :
			cout << "I'll take it as a no." << endl;
			cout << endl;
			cout << "Thanks for register with us." << endl;
			cout << "See you next time." << endl;
	}
	return 0;
}