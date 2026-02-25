#include <iostream>
using namespace std;

struct stInf
{
    string FirstName;
    string LastName;
    unsigned short Age;
    string Phone;
};

void ReadPersonData(stInf &Person)
{
    cout << "Enter your first name" << endl;
     cin >> Person.FirstName;
     cout << "Enter your last name" << endl;
     cin >> Person.LastName;
     cout << "Enter your age" << endl;
     cin >> Person.Age;
     cout << "Enter your phone" << endl;
     cin >> Person.Phone;
};

void ReadMorePerosnData(stInf Person[2])
{
    ReadPersonData(Person[0]);
    cout << endl;
    ReadPersonData(Person[1]);

}

void PrintPersonData(stInf Person)
{
    cout << "***************************\n";
    cout << "First Name : " << Person.FirstName << endl;
    cout << "Last Name  : " << Person.LastName << endl;
    cout << "Age        : " << Person.Age << endl;
    cout << "Phone      : " << Person.Phone << endl;
    cout << "***************************\n\n";
};

void PrintMorePersonData(stInf Person[2])
{
    PrintPersonData(Person[0]);
    PrintPersonData(Person[1]);
};

int main()
{
    stInf Person[2];

    ReadMorePerosnData(Person);
    cout << endl << endl;

    PrintMorePersonData(Person);
    return 0;
}