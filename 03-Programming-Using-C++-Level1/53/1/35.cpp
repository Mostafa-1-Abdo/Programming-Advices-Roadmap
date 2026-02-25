#include <iostream>
using namespace std;

int main()
{
    int Array[6], Sum =0 ;

    for (int i = 1;i <= 5;i++)
    {
        cout << "Enter number " << i <<" : ";
        cin >> Array[i];

        if (Array[i] > 50)
        {
            continue;
        }

        Sum += Array[i];
    }
    cout << Sum << endl;
    return 0;
}