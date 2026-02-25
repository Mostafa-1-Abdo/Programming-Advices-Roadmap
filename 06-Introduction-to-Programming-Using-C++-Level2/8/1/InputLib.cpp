#pragma once

#include <iostream>
using namespace std;

short ReadPositiveNumber(const string& Message)
{
	short Number;
	do {
		cout << Message;
		cin >> Number;
	} while (Number <= 0);
	return Number;
}

float ReadNumber(const string& Message)
{
	float Number;
	cout << Message;
	cin >> Number;
	return Number;
}
bool ValidatNumberInRange(short Number, short From, short To)
{
	return Number >= From && Number <= To;
}
float ReadNumberInRange(const string& Message, const short& From, const short& To)
{
	float Number;
	do {
		Number = ReadNumber(Message);
	} while (!(ValidatNumberInRange(Number, From, To)));
	return Number;
}
