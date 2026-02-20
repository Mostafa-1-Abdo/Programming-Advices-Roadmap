#include <iostream>
using namespace std;
#include "clInputValidation.h"
#include "clDate.h"

int main()
{
	clDate Date = clInputValidation::ReadDate();
	cout << endl << endl;

	Date.Print();
}