#include <iostream>
using namespace std;

int main()
{
    for (char i = 65;i <= 70;i++)
    {
        for (char j = 65;j <= i;j++)
        {
            cout << j;
        }
        cout << "\n";
    }
    return 0;
}