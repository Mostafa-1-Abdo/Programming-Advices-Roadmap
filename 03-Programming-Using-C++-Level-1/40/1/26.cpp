#include <iostream>
using namespace std;

void  ReadArrayGrades(float Grade[3])
{
    cout << "Enter Grade1\n";
    cin >> Grade[0];
    cout << "Enter Grade2\n";
    cin >> Grade[1];
    cout << "Enter Grade3" << endl;
    cin >> Grade[2];
};

float AverageGrades(float Grade[3])
{
   return (Grade[0] + Grade[1] + Grade[2]) / 3;
};

void PrintArrayGrades(float Average)
{
    cout << "*********************" << endl;
    cout <<Average << endl;
};

int main()
{
    float Grade[3];
    ReadArrayGrades(Grade);
    PrintArrayGrades(AverageGrades(Grade));
    return 0;
}