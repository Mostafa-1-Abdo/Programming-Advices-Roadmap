#include <iostream>
using namespace std;

struct stPersonSalary
{
    float Monthly;
    float Yearlysalary;

};

struct stPerosnAdress
{
    string City;
    string Country;
};

struct stPersonInf
{
    string Name;
    unsigned short Age ;
    char Gender;
    bool Married;
    stPerosnAdress Address;
    stPersonSalary Salary;
};

int main()
{
    stPersonInf Me;
    Me.Name = "Mostafa";
    Me.Age = 19;
    Me.Address.City = "Zifta";
    Me.Address.Country = "Egypt";
    Me.Salary.Monthly = 0;
    Me.Salary.Yearlysalary = 0;
    Me.Gender = 'M';
    Me.Married = 0;

   cout << "***********************\n";
   cout << "Name           : " << Me.Name << endl;
   cout << "Age            : " << Me.Age << endl;   
   cout << "City           : " << Me.Address.City << endl;
   cout << "Country        : " << Me.Address.Country << endl;
   cout << "Monthly Salary : " << Me.Salary.Monthly << endl;
   cout << "Yearly Salary  : " << Me.Salary.Yearlysalary << endl;
   cout << "Gender         : " << Me.Gender << endl;
   cout << "Married        : " << Me.Married << endl;
   cout << "***********************\n";

    return 0;
}


