#include <iostream>
using namespace std;

int main()
{
    for (char i = 1;i <= 10;i++)
    {
        for (char j = 10;j >= i;j--)
        {
            cout <<"*";
        }
        cout << "\n";
    }
    return 0;
}