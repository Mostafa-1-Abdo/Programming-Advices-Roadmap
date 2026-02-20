#include <iostream>
using namespace std;

struct stPerson
{
	string FirstName;
	string LastName;
};

stPerson ReadInfo()
{
	stPerson Person1;
	cout << "Enter your first name\n";
	cin >> Person1.FirstName;

	cout << "Enter your last name\n";
	cin >> Person1.LastName;

	return Person1;
}

string GetFullName(const stPerson& Person,bool Reversed)
{
	if(Reversed)
		return Person.LastName + " " + Person.FirstName ;
	return Person.FirstName +" "+ Person.LastName;
}

void PrintFullName(string FullName)
{
	cout <<"\nYour full name is : "<<FullName << endl;
}

int main()
{
	PrintFullName(GetFullName(ReadInfo(),0));

	return 0;
}