#include <iostream>
using namespace std;

enum enStatus { Hired = 1, Rejected };

struct stPerson
{
	short Age;
	bool HasDriverLicense;
};

void ReadInf(stPerson& Person)
{
	do {
		cout << "Enter your age\n";
		cin >> Person.Age;
	} while (Person.Age <= 0);

	cout << "Do you have a driver license?(yes=1,no=0)\n";
	cin >> Person.HasDriverLicense;
}

enStatus CheckStatus(const stPerson& Person)
{
	if (Person.Age > 21 && Person.HasDriverLicense)
		return enStatus::Hired;
	return enStatus::Rejected;
}

void PrintStatus(const enStatus& Status)
{
	if (Status == enStatus::Hired)
		cout << "Hired\n";
	else
		cout << "Rejected\n";
}

int main()
{
	stPerson Person1;
	ReadInf(Person1);

	PrintStatus(CheckStatus(Person1));

	return 0;
}