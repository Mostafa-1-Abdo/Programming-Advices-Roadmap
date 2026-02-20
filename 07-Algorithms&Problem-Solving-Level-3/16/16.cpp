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

short MatrixCountNumber(const int Matrix[3][3], const short& Rows, const short& Cols, const int& Number)
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
bool MatrixIsSparse(const int Matrix[3][3], const short& Rows, const short& Cols)
{
	short MatrixSize = Rows * Cols;
	return MatrixCountNumber(Matrix, Rows, Cols, 0) > MatrixSize /2;
}
void PrintSparseResult(const int Matrix[3][3], const short& Rows, const short& Cols)
{
	cout << "The matrix is " << (MatrixIsSparse(Matrix, Rows, Cols) ? "sparse" : "not sparse");
}

int main()
{
	int maSparse[3][3] = { {8,0,0},{0,1,7},{0,0,1} };

	MatrixPrint(maSparse, 3, 3);
	cout << endl << endl;

	PrintSparseResult(maSparse, 3, 3);
	cout << endl << endl;
}