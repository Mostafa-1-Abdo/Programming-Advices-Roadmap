#pragma once
#include <iostream>
#include <conio.h>
#include <string>
#include "clString.h"
#include "clDate.h"

class clInputValidation
{
public:
	static int ReadIntNumber(const string& Message = "Enter a int number")
	{
		int Number;

		cout << Message << " : ";
		cin >> Number;

		while (cin.fail())
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Invalid number, enter again : ";
			cin >> Number;
		}

		return Number;
	}
	static double ReadDoubleNumber(const string& Message = "Enter a double number")
	{
		double Number;

		cout << Message << " : ";
		cin >> Number;

		while (cin.fail())
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Invalid number, enter again : ";
			cin >> Number;
		}

		return Number;
	}

	static int ReadIntNonNegativeNumber(const string& Message = "Enter a int non negative number")
	{
		int Number;
		bool InvalidNumber = false;

		cout << Message << " : ";
		do {
			if (InvalidNumber)
			{
				cout << "Number is not non negative number, enter again : ";
			}
			cin >> Number;

			while (cin.fail())
			{
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');

				cout << "Invalid number, enter a valid number : ";
				cin >> Number;
			}

			InvalidNumber = true;
		} while (Number < 0);

		return Number;
	}
	static double ReadDoubleNonNegativeNumber(const string& Message = "Enter a double non negative number")
	{
		double Number;
		bool InvalidNumber = false;

		cout << Message << " : ";
		do {
			if (InvalidNumber)
			{
				cout << "Number is not non negative number, enter again : ";
			}
			cin >> Number;

			while (cin.fail())
			{
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');

				cout << "Invalid number, enter again : ";
				cin >> Number;
			}

			InvalidNumber = true;
		} while (Number < 0);

		return Number;
	}

	static int ReadIntNumberBetween(const int From, const int To, const string& Message = "Enter a int number")
	{
		int Number;
		bool InvalidNumber = false;

		cout << Message << " between " << From << " and " << To << " : ";
		do {
			if (InvalidNumber)
			{
				cout << "Number is not within range, enter again : ";
			}
			cin >> Number;

			while (cin.fail())
			{
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');

				cout << "Invalid number, enter again : ";
				cin >> Number;
			}

			InvalidNumber = true;
		} while (!(IsNumberBetween(Number, From, To)));

		return Number;
	}
	static double ReadDoubleNumberBetween(const double From, const double To, const string& Message = "Enter a double number : ")
	{
		double Number;
		bool InvalidNumber = false;

		cout << Message << " between " << From << " and " << To << " : ";
		do {
			if (InvalidNumber)
			{
				cout << "Number is not within range, enter again : ";
			}
			cin >> Number;

			while (cin.fail())
			{
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');

				cout << "Invalid number, enter again : ";
				cin >> Number;
			}

			InvalidNumber = true;
		} while (!(IsNumberBetween(Number, From, To)));

		return Number;
	}

	static short ReadHiddenNumber(const string& Message)
	{
		char Number;
		cout << Message << "\n";
		Number = _getch();
		return Number - '0';
	}

	static bool IsNumberBetween(const short Number, const short From, const short To)
	{
		return Number >= From && Number <= To;
	}
	static bool IsNumberBetween(const int Number, const int From, const int To)
	{
		return Number >= From && Number <= To;
	}
	static bool IsNumberBetween(const float Number, const float From, const float To)
	{
		return Number >= From && Number <= To;
	}
	static bool IsNumberBetween(const double Number, const double From, const double To)
	{
		return Number >= From && Number <= To;
	}

	static string ReadString(const string& Message = "Enter a string")
	{
		string String;

		cout << Message << " : ";
		getline(cin >> ws, String);

		return String;
	}
	static bool ReadOption(const string& Message)
	{
		string Option;
		bool InvalidOption = false;

		cout << Message << " : ";
		do {
			if (InvalidOption)
			{
				cout << "Invalid option, enter again : ";
			}
			cin >> Option;
			Option = clString::LowerAllString(Option);

			InvalidOption = true;

		} while (Option != "yes" && Option != "no");

		return Option == "yes";
	}

	static clDate ReadDate(const string Message = "Enter a date")
	{
		clDate Date;

		cout << Message << ":-\n";
		Date.Year = ReadIntNonNegativeNumber("Enter a year");
		Date.Month = ReadIntNumberBetween(1, 12, "Enter a month");
		Date.Day = ReadIntNumberBetween(1, clDate::GetNumberOfDaysInMonth(Date.Month, Date.Year), "Enter a day");
	
		return Date;
	}
};