#pragma once
#include <iostream>
#include <string>
#include <cmath>

class clsUtil
{
public:
    static void Srand()
    {
        srand((unsigned)time(NULL));
    }
    static int RandomNumberInRange(const int From, const int To)
    {
        return rand() % (To - From + 1) + From;
    }
 
    enum enCharType {
        UpperLetter = 1, LowerLetter, Digit, RandomChar, SpecialChar
    };
    static char GetRandomChar(enCharType CharType)
    {
        if (CharType == RandomChar)
        {
            CharType = (enCharType)RandomNumberInRange(1, 3);
        }

        switch (CharType)
        {
        case enCharType::LowerLetter:
            return char(RandomNumberInRange(97, 122));
        case enCharType::UpperLetter:
            return char(RandomNumberInRange(65, 90));
        case enCharType::SpecialChar:
            return char(RandomNumberInRange(33, 47));
        case enCharType::Digit:
            return char(RandomNumberInRange(48, 57));
        }
    }
    static string GenerateWord(const short Length,const enCharType CharType)
    {
        string Word;

        for (short i = 1; i <= Length; i++)
            Word = Word + GetRandomChar(CharType);

        return Word;
    }
    static string GenerateKey(enCharType CharType = UpperLetter)
    {
        string Key;

        Key = GenerateWord(4, CharType) + "-";
        Key += GenerateWord(4, CharType) + "-";
        Key += GenerateWord(4, CharType) + "-";
        Key += GenerateWord(4, CharType);

        return Key;
    }

    static void Swap(int& Number1, int& Number2)
    {
        int Temp = Number1;
        Number1 = Number2;
        Number2 = Temp;
    }
    static void Swap(float& Number1, float& Number2)
    {
        float Temp = Number1;
        Number1 = Number2;
        Number2 = Temp;
    }
    static void Swap(double& Number1, double& Number2)
    {
        double Temp = Number1;
        Number1 = Number2;
        Number2 = Temp;
    }
    static void Swap(char& Char1, char& Char2)
    {
        char Temp = Char1;
        Char1 = Char2;
        Char2 = Temp;
    }
    static void Swap(string& String1, string& String2)
    {
        string Temp = String1;
        String1 = String2;
        String2 = Temp;
    }


    static bool IsNumberInRange(const short Number, const short From, const short To)
    {
        return Number >= From && Number <= To;
    }

    static bool IsPrime(const int Number)
    {
        if (Number <= 1)
            return false;

        int SqrtOfNumber = sqrt(Number);
        for (int i = 2; i <= SqrtOfNumber; i++)
        {
            if (Number % i == 0)
                return false;
        }
        return true;
    }

    static bool IsPalindrome(const int Number)
    {
        return Number == GetReversedNumber(Number);
    }

    static void EncryptText(string& Text, const short EncryptionKey)
    {
        short TextLength = Text.length();
        for (short i = 0; i < TextLength; i++)
            Text[i] = char((int)Text[i] + EncryptionKey);
    }
    static void DecryptText(string& Text, const short EncryptionKey)
    {
        short TextLength = Text.length();
        for (short i = 0; i < TextLength; i++)
            Text[i] = char((int)Text[i] - EncryptionKey);
    }


    static int GetReversedNumber(int Number)
    {
        int ReversedNumber = 0;
        int Remainder;

        while (Number > 0)
        {
            Remainder = Number % 10;
            ReversedNumber = ReversedNumber * 10 + Remainder;
            Number /= 10;

        }

        return ReversedNumber;
    }
    

    static string Tabs(const short NumberOfTabs)
    {
        string Tab = "";

        for (short i = 1; i < NumberOfTabs; i++)
            Tab += "\t";

        return Tab;
    }


    static void WaitAndClear()
    {
        cout << "Press any key to go back to main menu...";
        system("pause>0");
        system("cls");
    }
    static void PrintHeader(const string& Heading)
    {
        cout << "------------------------------------\n";
        cout << "\t" << Heading << "\n";
        cout << "------------------------------------\n";
    }  
};