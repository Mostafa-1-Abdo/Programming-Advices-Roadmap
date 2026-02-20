#include <iostream>
using namespace std;

int ReadNumber(const string& Message)
{
	int Number;
	cout << Message << "\n";
	cin >> Number;
	return Number;
}

void PowerOf_2_3_4(const int& Number)
{
	cout << "\n\n";
	cout << Number << "^" << 2 << " = " << Number * Number << endl;
	cout << Number << "^" << 3 << " = " << Number * Number* Number<<endl;
	cout << Number << "^" << 4 << " = " << Number * Number* Number* Number << endl;
}

int main()
{
	PowerOf_2_3_4(ReadNumber("Enter a number"));

	return 0;
}