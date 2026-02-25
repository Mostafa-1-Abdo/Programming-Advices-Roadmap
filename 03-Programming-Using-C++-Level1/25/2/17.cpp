#include <iostream>
using namespace std;

int main()
{
	cout << "(5 > 6 && 7 = 7) || (1 || 0) is " << ((5 > 6 && 7 == 7) || (1 || 0)) << endl;
	cout << "!(5>6 && 7==7)||(1 || 0) is " << (!(5 > 6 && 7 == 7) || (1 || 0)) << endl;

	return 0;
}