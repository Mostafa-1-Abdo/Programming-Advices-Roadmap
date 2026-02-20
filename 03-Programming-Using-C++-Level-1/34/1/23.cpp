#include <iostream>
using namespace std;

void MySumProcedure()
{
    float Number1, Number2;
    cout << "Enter Number1\n";
    cin >> Number1;
    cout << "Enter Number2\n";
    cin >> Number2;
    cout << "********************\n" << Number1 + Number2;
};

float MySumFunction()
{
    float Number1, Number2;
    cout << "Enter Number1\n";
    cin >> Number1;
    cout << "Enter Number2\n";
    cin >> Number2;
    cout << "********************\n";
    return Number1 + Number2;
};

int main()
{
    MySumProcedure();
    cout << endl << endl;

    cout << MySumFunction() << endl;

    return 0;
}
