#include <iostream>
using namespace std;

int main()
{
    unsigned short Age =19, MonthlySalary = 0;
    unsigned char Gender='M';
    string Name="Mostafa", City="Zifta", Country="Egypt";
    bool Married = false;

   cout << "***********************\n";
   cout << "Name : " << Name << endl;
   cout << "Age : " << Age << endl;
   cout<<"City : "<<City << endl;
   cout<<"Country : " << Country << endl;
   cout<<"Monthly Salary : "<< MonthlySalary << endl;
   cout<<"Yearly Salary : "<< MonthlySalary *12<< endl;
   cout << "Gender : " << Gender << endl;
   cout<<"Married : "<< Married << endl; 
   cout << "***********************\n";
    return 0;
}