#include "pch.h"
#include "student.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string name;
	cout << "Insert name : ";
	getline(cin, name);
	Student stud1(name);

	stud1.GetPointers();
	stud1.Display();
}
