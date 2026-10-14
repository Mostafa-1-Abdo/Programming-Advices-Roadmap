#include <iostream>
using namespace std;

string Convert1NumberToNumberText(const short Number)
{
	string arNumberText[] = { "","One","Two","Three","Four","Five","Six","Seven","Eight","Nine" };
	return arNumberText[Number];
}
string Convert2NumbersToNumberText(const short Number)
{
	short Tens = Number / 10;
	short Ones = Number % 10;

	if (Tens == 0)
		return  Convert1NumberToNumberText(Ones);

	if (Number < 20)
	{
		string arNumberText[] = { "Ten","Eleven","Twelve","Thirteen","Fourteen","Fifteen","Sixteen","Seventeen","Eighteen","Nineteen" };
		return arNumberText[Ones];
	}

	string arTensText[] = { "Twenty","Thirty","Forty","Fifty","Sixty","Seventy","Eighty","Ninety"};
	string OnesText = Convert1NumberToNumberText(Ones);
	return arTensText[Tens - 2] + (OnesText.empty() ? "" : " " + OnesText);
}
string Convert3NumbersToNumberText(const short Number)
{
	if (Number == 0)
		return "";

	if (Number < 100)
		return Convert2NumbersToNumberText(Number);

	return  Convert1NumberToNumberText(Number / 100) + " Hundred " + Convert2NumbersToNumberText(Number % 100);
}
string ConvertNumberToText(long long Number,short Scale = 0)
{
	const string arScales[] = {"","Thousand","Million","Billion"};

	if (Number == 0 )
	{
		if (Scale == 0)
			return "Zero";

		return "";
	}


	string Text = Convert3NumbersToNumberText(Number % 1000);
	if (!Text.empty())
		Text += " " + arScales[Scale] + " ";

	Scale++;
	return  ConvertNumberToText(Number / 1000,Scale) +  Text;
}

int main()
{
	cout << ConvertNumberToText(0);
}