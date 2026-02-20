#include <iostream>
#include <cstdlib>
using namespace std;

short RandomNumberInRange(short From,short To)
{
	return rand()%(To-From+1) + From;
}

int main()
{
	srand((unsigned)time(NULL));
	cout << RandomNumberInRange(1, 10) << endl;
	cout << RandomNumberInRange(1, 10) << endl;
	cout << RandomNumberInRange(1, 10) << endl;
	return 0;
}