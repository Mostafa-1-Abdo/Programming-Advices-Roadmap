#include <iostream>
using namespace std;

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

bool MatrixIsIdentity(const int Matrix[3][3], const short& Rows, const short& Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			if (i == j && Matrix[i][j] != 1 || i != j && Matrix[i][j] != 0)
				return false;
		}
	}
	return true;
}
void PrintIdentityResult(const int Matrix[3][3], const short& Rows, const short& Cols)
{
	cout << "The matrix is " << (MatrixIsIdentity(Matrix, Rows, Cols) ? "identity" : "not identity");
}

int main()
{
	int maIdentity[3][3] = { {1,0,0},{0,1,0},{0,0,1} };

	MatrixPrint(maIdentity, 3, 3);
	cout << endl << endl;

	PrintIdentityResult(maIdentity, 3, 3);
	cout << endl << endl;
}	