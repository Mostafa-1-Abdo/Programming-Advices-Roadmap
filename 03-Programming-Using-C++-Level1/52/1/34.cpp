#include <iostream>
using namespace std;

int main()
{
    int Array[10] = { 10,0,44,55,33,22,99,88,20,100 },Counter=0;

    for (int i = 0;i <= 9;i++)
    {
        if (Array[i] == 20)
        {
            cout << "The positon is " << i;
            break; 
        }
        Counter += 1;
    }

    if (Counter == 10)
        cout << "Not found" << endl;

    return 0;
}
