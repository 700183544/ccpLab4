// RIley Andrew & Jason
#include <iostream>
#include <conio.h>
#include <string>
#include <vector>

using namespace std;

struct Employee
{
	int ID;
	string FirstName;
	string LastName;
	float PayRate;
	float Hours;
};

int main()
{
	vector<Employee> EmployeeList;

	char temp = 'Y';

	do
	{
		Employee entry;
		cout << "Enter ID: ";
		cin >> entry.ID;

		cout << "Enter first name: ";
		cin >> entry.FirstName;

		cout << "Enter last name: ";
		cin >> entry.LastName;

		cout << "Enter pay rate: ";
		cin >> entry.PayRate;

		cout << "Enter hours: ";
		cin >> entry.Hours;

		EmployeeList.push_back(entry);


		cout << "Do you want to add another employee? (Y = enter another employee. N = exit.) ";
		cin >> temp;
		cout << endl;


	} while (temp == 'Y' || temp == 'y');

	float totalgrosspay = 0;

	for (int i = 0; i < EmployeeList.size(); i++)
	{		
		cout << EmployeeList[i].ID; cout << " " << EmployeeList[i].FirstName; cout << " " << EmployeeList[i].LastName; cout << " $" << EmployeeList[i].PayRate * EmployeeList[i].Hours << endl;
		totalgrosspay += EmployeeList[i].PayRate * EmployeeList[i].Hours;
	} 

	cout << "Total gross pay: $" << totalgrosspay;

	_getch();
	return 0;
}