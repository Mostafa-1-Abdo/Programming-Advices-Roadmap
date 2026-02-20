#include <iostream>
#include <string>
using namespace std;

struct stInf
{
	string Name,City,Country;
	int Age;
	float MonthlySalary, YearlySalary;
	char Gender;
	bool Married;
};

void ReadInf(stInf &Me)
{
	cout << "Enter your name "<<endl;
	getline(cin, Me.Name);
	cout << "Enter your age" << endl;
	cin >> Me.Age;
	cout << "Enter your city " << endl;
	cin >> Me.City;
	cout << "Enter your Country " << endl;
	cin >> Me.Country;
	cout << "Enter your monthly Salary " << endl;
	cin >> Me.MonthlySalary;
	Me.YearlySalary = Me.MonthlySalary * 12;
	cout << "Enter your gender" << endl;
	cin >> Me.Gender;
	cout << "Are you married ?(yes=1,no=0)" << endl;
	cin >> Me.Married;
	

};

void PrintInf(stInf &Me)
{
	cout << "Name           : " <<Me.Name << endl
		 << "Age            : " <<Me.Age << endl 
		 << "City           : " <<Me.City << endl
		 << "Country        : " <<Me.Country << endl 
		 << "Monthly Salary : " <<Me.MonthlySalary << endl 
		 << "Yearly Salary  : " <<Me.YearlySalary << endl
		 << "Gender         : " <<Me.Gender << endl 
		 << "Married        : " <<Me.Married << endl;
};

int main()
{
	stInf Me;
	ReadInf(Me);
	cout << endl << endl;
	PrintInf(Me);
	return 0;
}