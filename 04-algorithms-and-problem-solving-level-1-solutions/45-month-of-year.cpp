#include <iostream>
using namespace std;

enum enMonhtsOfYear { January = 1, February, March, April, May, June, July, August, September, October, November, December };

short ReadPositiveNumber(const string& Message)
{
    short Number;
    do {
        cout << Message << "\n";
        cin >> Number;
    } while (Number <= 0);
    return Number;
}

enMonhtsOfYear ReadMonthOfYear()
{
    return (enMonhtsOfYear)ReadPositiveNumber("Enter a number of the month");
}

void PrintMonthOfYear(const enMonhtsOfYear& MonthOfyYear)
{
    cout << "\n\nThis month is ";
    switch (MonthOfyYear)
    {
    case enMonhtsOfYear::January:
        cout << "January\n";
        break;
    case enMonhtsOfYear::February:
        cout << "February\n";
        break;
    case enMonhtsOfYear::March:
        cout << "March\n";
        break;
    case enMonhtsOfYear::April:
        cout << "April\n";
    case enMonhtsOfYear::May:
        cout << "May\n";
        break;
    case enMonhtsOfYear::June:
        cout << "June\n";
        break;
    case enMonhtsOfYear::July:
        cout << "July\n";
        break;
    case enMonhtsOfYear::August:
        cout << "August\n";
        break;
    case enMonhtsOfYear::September:
        cout << "September\n";
        break;
    case enMonhtsOfYear::October:
        cout << "October\n";
        break;
    case enMonhtsOfYear::November:
        cout << "November\n";
        break;
    case enMonhtsOfYear::December:
        cout << "December\n";
        break;
    default:
        cout << "wrong month";
    }
    cout << endl;
}

int main()
{
    PrintMonthOfYear(ReadMonthOfYear());

    return 0;
}