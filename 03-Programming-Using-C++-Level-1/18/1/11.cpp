#include <iostream>
using namespace std;

int main()
{
    string Name ;
    int Age ;
    string City ;
    string Country ;
    float MonthlySalary;
    char Gender ;
    bool Married ;

    
    cout << "Enter your name" << endl;
    cin>> Name;
    cout << "Enter your age" << endl;
    cin >> Age;
    cout << "Enter your city" << endl;
    cin >> City;
    cout << "Enter your country" <<endl;
    cin >> Country;
    cout << "Enter your monthly Salary"<< endl;
    cin >> MonthlySalary;
    cout << "Enter your gender" << endl;
    cin >> Gender;
    cout << "Are you married ?(true=1/false=0)" <<endl;
    cin >> Married;
    

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