#include <iostream>
using namespace std;

int ReadNumber(const string& Message = "Enter a number")
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

void MatrixPrint(const int Matrix[3][3], const short& Rows, const short& Cols, const string Message = "Matrix elements : ")
{
	cout << Message << "\n";
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
			printf("%02d    ", Matrix[i][j]);
		cout << "\n";
	}
}

short MatrixCountNumber(const int Matrix[3][3], const short& Rows, const short& Cols,const int &Number)
{
	short coNumber = 0;
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			if (Number == Matrix[i][j])
				coNumber++;
		}
	}
	return coNumber;
}
void PrintCountResult(const int Matrix[3][3], const short& Rows, const short& Cols, const int& Number)
{
	cout << "Number " << Number << " count in matrix is " << MatrixCountNumber(Matrix, Rows, Cols, Number);
}

int main()
{
	int maNumbers[3][3] = { {1,2,3},{2,3,1},{3,1,2} };

	MatrixPrint(maNumbers, 3, 3);
	cout << endl << endl;

	PrintCountResult(maNumbers, 3, 3, ReadNumber("Enter the number to count in matrix"));
	cout << endl << endl;
}