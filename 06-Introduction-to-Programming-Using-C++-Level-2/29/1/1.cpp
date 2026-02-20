#include <iostream>
#include <vector>
using namespace std;

int ReadNumber(const string &Message="Enter a number")
{
	int Number;
		cout << Message << "\n";
		cin >> Number;
		while (cin.fail())
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Invalid number, enter a valid number\n";
			cin >> Number;
		}
	return Number;
}
bool CheckAddMoreElements()
{
	string AddMore;
	cout << "Do you want to add more elements ?(Yes,No)\n";
	do{
		cin >> AddMore;
	} while (AddMore != "Yes" && AddMore != "No");
	return AddMore == "Yes";
}
void FillVector(vector <int>& veNumbers)
{
	do
	{
		veNumbers.push_back(ReadNumber());
	} while (CheckAddMoreElements());
}

void PrintVector(vector <int> &veNumbers)
{
	cout << "\n\nVector elements : ";
	for (int& Number : veNumbers)
		cout << Number << " ";
}

int main()
{
	vector <int> veNumbers;

	FillVector(veNumbers);
	PrintVector(veNumbers);

	return 0;
}