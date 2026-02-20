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

bool MatrixIsNumberExist(const int Matrix[3][3], const short& Rows, const short& Cols,const int &Number)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			if (Number == Matrix[i][j])
				return true;
		}
	}
	return false;
}
void PrintNumberExistResult(const int Matrix[3][3], const short& Rows, const short& Cols,const int &Number)
{
	cout << "The number is " << (MatrixIsNumberExist(Matrix, Rows, Cols, Number) ? "in the matrix" : "not in the matrix");
}

int main()
{
	int maNumbers[3][3] = { {8,0,0},{0,1,7},{0,0,1} };

	MatrixPrint(maNumbers, 3, 3);
	cout << endl << endl;

	PrintNumberExistResult(maNumbers, 3, 3, ReadNumber("Enter the number to look for in matrix"));
	cout << endl << endl;
}