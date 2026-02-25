#include <iostream>
using namespace std;

int main()
{
    for (char i = 65;i <= 90;i++)
    {
        for (char j = 65;j <= 90;j++)
        {
            cout << i << j << "\n";
        }
        cout << endl;
    }
    return 0;
}