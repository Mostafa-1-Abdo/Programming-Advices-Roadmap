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

bool MatrixIsScalar(const int Matrix[3][3], const short& Rows, const short& Cols)
{
	int FirstDiagonalElement = Matrix[1][1];
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			if (i == j && Matrix[i][j] != FirstDiagonalElement || i != j && Matrix[i][j] != 0)
				return false;
		}
	}
	return true;
}
void PrintScalarResult(const int Matrix[3][3], const short& Rows, const short& Cols)
{
	cout << "The matrix is " << (MatrixIsScalar(Matrix, Rows, Cols) ? "scalar" : "not scalar");
}

int main()
{
	int maScalar[3][3] = { {9,0,0},{0,9,0},{0,0,9} };

	MatrixPrint(maScalar, 3, 3);
	cout << endl << endl;

	PrintScalarResult(maScalar, 3, 3);
	cout << endl << endl;
}