#include <iostream>
using namespace std;

int main()
{
    float Grade[3];
    float Average;

    cout << "Enter your grades" << endl;
    cin >> Grade[0] >> Grade[1] >> Grade[2];

    Average = (Grade[0] + Grade[1] + Grade[2]) / 3;
    cout << "******************************" << endl;
    cout << Average << endl;

    return 0;
}

 