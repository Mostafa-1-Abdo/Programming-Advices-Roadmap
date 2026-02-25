#include <iostream>
#include <string>
using namespace std;

string ReadString(const string& Message)
{
	string String;
	cout << Message << "\n";
	getline(cin, String);
	return String;
}

short ReadNumber(const string& Message)
{
	short Number;
	cout << Message << "\n";
	cin >> Number;
	return Number;
}

string Encryption(string Text, const short& EncryptionKey)
{
	string EncryptionText="";
	for (short i = 0; i < Text.length(); i++)
	{
		if (Text[i] == ' ')
			EncryptionText += Text[i];
		else
		EncryptionText += char(Text[i] + EncryptionKey);
	}
	return EncryptionText;
}

string Decryption(string EncryptionText,const short &EncryptionKey)
{
	string DecryptionText = "";
	for (short i = 0; i < EncryptionText.length() ; i++)
	{
		if (EncryptionText[i] == ' ')
			DecryptionText += EncryptionText[i];
		else
		DecryptionText += char(EncryptionText[i] - EncryptionKey);
	}
	return DecryptionText;
}


int main()
{
	string Text = ReadString("Enter a text");
	short EncryptionKey = ReadNumber("Enter encryption key");

	string EncryptionText = Encryption(Text, EncryptionKey);
	string DecryptionText = Decryption(EncryptionText, EncryptionKey);

	cout << "\n\nText Before Encryption : " << Text << endl;
	cout << "Text After Encryption : " << EncryptionText << endl;
	cout << "Text After Decryption : " << DecryptionText << endl;
	

	return 0;
}