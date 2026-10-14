#include <iostream>
using namespace std;

class clPerson
{
private:
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

int main()
{
	clPerson Person1(1, "Mostafa", "Abdo", "Mostafaabdo4789@gmail.com", "01225924553");
	Person1.Print();
	cout << endl;

	Person1.SendEmail("Hi", "How are you?");
	cout << endl;
	Person1.SendSMS("How are you?");
}