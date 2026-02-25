#include <iostream>
using namespace std;

int main()
{
	string Name = "Mostafa Abdo";
	unsigned short Age = 19;
	string City = "Zifta";
	string Country = "Egypt";
	float MonthlySalary = 0;
	char Gender = 'M';
	bool Married = false;

	cout << "*****************************\n";
	cout << "Name           : " << Name << endl;
	cout << "Age            : " << Age << endl;
	cout << "City           : " << City << endl;
	cout << "Country        : " << Country << endl;
	cout << "Monthly Salary : " << MonthlySalary << endl;
	cout << "Yearly Salary  : " << MonthlySalary * 12 << endl;
	cout << "Gender         : " << Gender << endl;
	cout << "Married        : " << Married << endl;
	cout << "*****************************\n";

	return 0;
}