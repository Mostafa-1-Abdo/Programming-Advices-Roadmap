#include <iostream>
using namespace std;

class clPerson
{
protected:
	int _ID;
	string  _FirstName, _LastName, _Email, _Phone;

public:
	clPerson(const int ID, const string& FirstName, const string& LastName, const string& Email, const  string& Phone)
	{
		_ID = ID;
		_FirstName = FirstName;
		_LastName = LastName;
		_Email = Email;
		_Phone = Phone;
	}

	int GetID()
	{
		return _ID;
	}

	void SetFirstName(const string& FirstName)
	{
		_FirstName = FirstName;
	}
	string GetFirstName()
	{
		return _FirstName;
	}

	void SetLastName(const string& LastName)
	{
		_LastName = LastName;
	}
	string GetLastName()
	{
		return _LastName;
	}

	void SetEmail(const string& Email)
	{
		_Email = Email;
	}
	string GetEmail()
	{
		return _Email;
	}

	void SetPhone(const string& Phone)
	{
		_Phone = Phone;
	}
	string GetPhone()
	{
		return _Phone;
	}

	string GetFullName()
	{
		return _FirstName + " " + _LastName;
	}

	void SendEmail(const string& Subject, const string& Body)
	{
		cout << "This following message sent successfully to email : " << _Email << "\n";
		cout << "Subject : " << Subject << "\n";
		cout << "Body : " << Body << "\n";
	}

	void SendSMS(const string& TextMessage)
	{
		cout << "This following SMS sent successfully to phone : " << _Phone << "\n";
		cout << TextMessage << "\n";
	}

	void Print()
	{
		cout << "Info:\n";
		cout << "____________________________\n";
		cout << "ID        : " << _ID << "\n";
		cout << "FirstName : " << _FirstName << "\n";
		cout << "LastName  : " << _LastName << "\n";
		cout << "FullName  : " << GetFullName() << "\n";
		cout << "Email     : " << _Email << "\n";
		cout << "Phone     : " << _Phone << "\n";
		cout << "____________________________\n";
	}
};

class clEmployee : public clPerson
{
protected:
	string _Title, _Department;
	float _Salary;

public:
	clEmployee(const int ID, const string& FirstName, const string& LastName, const string& Email, const  string& Phone, const string& Title, const string& Department, const float Salary)
		:clPerson(ID, FirstName, LastName, Email, Phone)
	{
		_Title = Title;
		_Department = Department;
		_Salary = Salary;
	}

	void SetTitle(const string &Title)
	{
		_Title = Title;
	}
	string GetTitle()
	{
		return _Title;
	}

	void SetDepartment(const string &Department)
	{
		_Department = Department;
	}
	string GetDepartment()
	{
		return _Department;
	}

	void SetSalary(const float Salary)
	{
		_Salary = Salary;
	}
	float GetSalary()
	{
		return _Salary;
	}

	void Print()
	{
		cout << "Info:\n";
		cout << "____________________________\n";
		cout << "ID             : " << _ID << "\n";
		cout << "FirstName      : " << _FirstName << "\n";
		cout << "LastName       : " << _LastName << "\n";
		cout << "FullName       : " << GetFullName() << "\n";
		cout << "Email          : " << _Email << "\n";
		cout << "Phone          : " << _Phone << "\n";
		cout << "Title          : " << _Title << "\n";
		cout << "Department     : " << _Department << "\n";
		cout << "Salary         : " << _Salary << "\n";
		cout << "____________________________\n";
	}
};

class clDeveloper :public  clEmployee
{
protected:
	string _MainProgrammingLanguage;

public:
	clDeveloper(const int ID, const string& FirstName, const string& LastName, const string& Email, const  string& Phone, const string& Title, const string& Department, const float Salary,const string & MainProgrammingLanguage)
		:clEmployee (ID, FirstName, LastName, Email, Phone,Title,Department,Salary)
	{
		_MainProgrammingLanguage = MainProgrammingLanguage;
	}

	void SetMainProgrammingLanguage(const string &MainProgrammingLanguage)
	{
		_MainProgrammingLanguage = MainProgrammingLanguage;
	}
	string GetMainProgrammingLanguage()
	{
		return _MainProgrammingLanguage;
	}

	void Print()
	{
		cout << "Info:\n";
		cout << "____________________________\n";
		cout << "ID                        : " << _ID << "\n";
		cout << "FirstName                 : " << _FirstName << "\n";
		cout << "LastName                  : " << _LastName << "\n";
		cout << "FullName                  : " << GetFullName() << "\n";
		cout << "Email                     : " << _Email << "\n";
		cout << "Phone                     : " << _Phone << "\n";
		cout << "Title                     : " << _Title << "\n";
		cout << "Department                : " << _Department << "\n";
		cout << "Salary                    : " << _Salary << "\n";
		cout << "Main programming language : " << _MainProgrammingLanguage << "\n";
		cout << "____________________________\n";
	}
};

int main()
{
	clDeveloper Developer1(1, "Mostafa", "Abdo", "Mostafaabdo4789@gmail.com", "01225924553","Engineer","Computer & Control Engineering",1000000,"C++");

	Developer1.Print();
}