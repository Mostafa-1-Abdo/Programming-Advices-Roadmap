#include <iostream>
using namespace std;

int main()
{
	long long x, y;

	cout << "Enter 2 numbers" << endl;
	cin >> x >> y;

	cout << x << " == " <<y<< " is " << (x == y) << endl;
	cout << x << " != " << y << " is " << (x != y )<< endl;
	cout << x << " > " << y << " is " << (x > y )<< endl;
	cout << x << " < " << y << " is " << (x < y) << endl;
	cout << x << " >= " << y << " is " << (x >= y )<< endl;
	cout << x << " <= " << y << " is " << (x <= y )<< endl;
	return 0;
}