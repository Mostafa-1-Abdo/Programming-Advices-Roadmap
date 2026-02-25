#include <iostream>
using namespace std;

int main()
{
    int x, y, z;
    cout << "Enter 3 Numbers\n";
    cin >> x >> y >> z;
    cout << endl << endl;
    cout << x << "+ \n"
         << y << "+ \n"
         << z <<
         "\n---------------------------------------\nTotal = "
         << x + y + z << endl;

    return 0;
}