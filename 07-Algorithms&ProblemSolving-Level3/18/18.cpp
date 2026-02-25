#include <iostream>
#include <vector>
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

void PrintVector(vector <int>& Vector, const string Message = "Vector elements : ")
{
	cout << Message << "\n";
	for (int& Element : Vector)
	{
		cout << Element << " ";
	}
}

bool MatrixIsNumberExist(const int Matrix[3][3], const short& Rows, const short& Cols, const int& Number)
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
vector <int> MatricesIntersectedNumbers(const int Matrix1[3][3], const  int Matrix2[3][3], const short& Rows, const short& Cols)
{
	vector <int> veIntersectedNumber;
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			if (MatrixIsNumberExist(Matrix1, Rows, Cols, Matrix2[i][j]))
				veIntersectedNumber.push_back(Matrix2[i][j]);
		}
	}
	return veIntersectedNumber;
}
void PrintIntersectedNumbers(const int Matrix1[3][3], const  int Matrix2[3][3], const short& Rows, const short& Cols)
{
	vector <int> veIntersectedNumber = MatricesIntersectedNumbers(Matrix1, Matrix2, Rows, Cols);
	
	PrintVector(veIntersectedNumber, "Intersected Numbers are : ");
}

int main()
{
	int ma1Numbers[3][3] = { {10,20,30},{1,50,60},{70,80,90} };
	int ma2Numbers[3][3] = { {7,1,20},{0,1,7},{10,0,1} };

	MatrixPrint(ma1Numbers, 3, 3);
	cout << endl << endl;
	MatrixPrint(ma2Numbers, 3, 3);
	cout << endl << endl;

	PrintIntersectedNumbers(ma1Numbers, ma2Numbers, 3, 3);
	cout << endl << endl;
}