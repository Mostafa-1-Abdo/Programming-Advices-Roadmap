#include <iostream>
#include <vector>
using namespace std;

struct stEmployee
{
	string FirstName;
	string LastName;
	float Salary;
};

int ReadNonNegativeNumber(const string& Message = "Enter a number")
{
	int Number;
	do {
		cout << Message;
		cin >> Number;
		while (cin.fail())
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Invalid number, enter a valid number\n";
			cin >> Number;
		}
	} while (Number < 0);
	return Number;
}
stEmployee FillStruct()
{
	stEmployee Employee;
	cout << "FirstName : " ;
	cin >> Employee.FirstName;
	cout << "LastName  : " ;
	cin >> Employee.LastName;
	Employee.Salary=ReadNonNegativeNumber("Salary    : ");

	return Employee;
}
bool CheckAddMoreElements()
{
	string AddMore;
	cout << "\nDo you want to add more elements ?(Yes,No)\n";
	do {
		cin >> AddMore;
	} while (AddMore != "Yes" && AddMore != "No");
	return AddMore == "Yes";
}
void FillVector(vector <stEmployee>& Vector)
{
	do
	{
		Vector.push_back(FillStruct());
	} while (CheckAddMoreElements());
}

void PrintVector(vector <stEmployee>& Vector)
{
	for (stEmployee& Element : Vector)
	{
		cout << "\n\n";
		cout << "FirstName : " << Element.FirstName << "\n";
		cout << "LastName  : " << Element.LastName << "\n";
		cout << "Salary    : " << Element.Salary << "\n";
	}
}

int main()
{
	vector <stEmployee> veEmployee;

	FillVector(veEmployee);

	PrintVector(veEmployee);

	return 0;
}