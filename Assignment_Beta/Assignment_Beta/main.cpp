#include "Client.h"
#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
	string first;
	string last;
	string id;
	string dob;

	int select = 0;

	cout << "Hello.\nPlease enter your first name : ";
	cin >> first;

	cout << "Please enter your last name : ";
	cin >> last;

	cout << "Please enter your id : ";
	cin >> id;

	cout << "Please enter your date of birth : ";
	cin >> dob;

	cout << "Client creation complete.\n";
	Client me(first, last, id, dob);

	Sleep(2000);
	system("cls");

	while (select != 4) {
		cout << "Please select action from options below:\n1. Purchase Ticket\n2. Cancel Ticket\n3. Display Ticket\n4. Quit\nSelection : ";
		cin >> select;

		switch (select) {
			case 1:
				me.TicketPurchase();
				Sleep(2000);
				system("cls");
				break;
			case 2:
				me.TicketCancel();
				Sleep(2000);
				system("cls");
				break;
			case 3:
				me.TicketDisplay(1);
				Sleep(2000);
				system("cls");
				break;
			case 4:
				cout << "Thank you, bye bye";
				break;
		}
	}
}
