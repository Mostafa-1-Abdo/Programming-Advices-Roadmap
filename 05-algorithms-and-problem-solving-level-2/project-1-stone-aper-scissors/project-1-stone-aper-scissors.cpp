#include <iostream>
#include <cstdlib>
#include <thread>
#include <chrono>
#include <conio.h>

using namespace std;

enum enChoice { Stone = 1, Paper, Scissor };

enum enPlayer2 { Computer = 1, Player };

enum enWinner { Player1, Player2, Draw };

struct stWinnerInfo
{
	enWinner Winner;
	string WinnerName;
};

struct stRoundInfo
{
	short RoundNumber;
	enChoice Player1Choice;
	enChoice Player2Choice;
	stWinnerInfo WinnerInfo;
};

struct stGameInfo
{
	short GameRounds;
	short Player1WonsTimes = 0;
	short Player2WonsTimes = 0;
	short DrawsTimes = 0;
	enPlayer2 Player2;
	stWinnerInfo WinnerInfo;
};

void StartGame();

short ReadPositiveNumber(const string& Message)
{
	short Number;
	do {
		cout << Message << "\n";
		cin >> Number;
	} while (Number <= 0);
	return Number;
}

short ReadNumber(const string& Message)
{
	short Number;
	cout << Message;
	cin >> Number;
	return Number;
}
short ReadHiddenNumber(const string& Message)
{
	char Number;
	cout << Message << "\n";
	Number = _getch();
	return Number - '0';
}
bool ValidatNumberInRange(short Number, short From, short To)
{
	return Number >= From && Number <= To;
}
short ReadNumberInRange(const string& Message, bool Hidden, const short& From, const short& To)
{
	short Number;
	do {
		if (Hidden)
			Number = ReadHiddenNumber(Message);
		else
			Number = ReadNumber(Message);
	} while (!(ValidatNumberInRange(Number, From, To)));
	return Number;
}

enPlayer2 SelectPlayer2()
{
	return (enPlayer2)ReadNumberInRange("Player2 ?\n[1] Computer\n[2] Player\n-------------------\n", false, 1, 2);
}

void PrintChoices()
{
	cout << "Your Choice ?\n" << "[1] Stone\n" << "[2] Paper\n" << "[3] Scissor\n" << "-------------------\n";
}

enChoice ReadPlayer1Choice(enPlayer2 Player2)
{
	if (Player2 == enPlayer2::Player)
		return (enChoice)ReadNumberInRange("Player 1 : ", true, 1, 3);
	return (enChoice)ReadNumberInRange("", false, 1, 3);
}

short RandomNumberInRange(short From, short To)
{
	return rand() % (To - From + 1) + From;
}
enChoice ReadPlayer2Choice(enPlayer2 Player2)
{
	if (Player2 == enPlayer2::Player)
	{
		this_thread::sleep_for(chrono::seconds(1));
		return (enChoice)ReadNumberInRange("Player 2 : ", true, 1, 3);
	}
	return (enChoice)RandomNumberInRange(1, 3);
}

enWinner CheckWinner(enChoice Player1Choice, enChoice Player2Choice)
{
	if (Player1Choice == Player2Choice)
		return enWinner::Draw;
	else if ((Player1Choice == enChoice::Stone && Player2Choice == enChoice::Scissor)
		|| (Player1Choice == enChoice::Paper && Player2Choice == enChoice::Stone)
		|| (Player1Choice == enChoice::Scissor && Player2Choice == enChoice::Paper))
		return enWinner::Player1;
	else
		return enWinner::Player2;
}
string GetWinnerAsString(enWinner Winner)
{
	switch (Winner)
	{
	case enWinner::Player1:
		return "Player1";
	case enWinner::Player2:
		return "Player2";
	default:
		return "Draw";
	}
}
void SetWinnerConsoleColor(enWinner Winner)
{
	switch (Winner)
	{
	case enWinner::Player1:
		system("color 2f");
		break;
	case enWinner::Player2:
		system("color 4f");
		break;
	default:
		system("color 6f");
	}
}

string GetChoiceAsString(enChoice PlayerChoice)
{
	switch (PlayerChoice)
	{
	case enChoice::Stone:
		return "Stone";
	case enChoice::Paper:
		return "Paper";
	default:
		return "Scissor";
	}
}
void GameSatistics(enWinner Winner, stGameInfo& Game)
{
	switch (Winner)
	{
	case enWinner::Player1:
		Game.Player1WonsTimes++;
		break;
	case enWinner::Player2:
		Game.Player2WonsTimes++;
		break;
	default:
		Game.DrawsTimes++;
	}
}
void PrintRoundResult(stRoundInfo& Round, stGameInfo& Game)
{
	cout << "____________________Round[" << Round.RoundNumber << "]____________________\n";
	cout << "Player1 Choice : " << GetChoiceAsString(Round.Player1Choice) << "\n";
	cout << "Player2 Choice : " << GetChoiceAsString(Round.Player2Choice) << "\n";
	cout << "Round Winner   : " << GetWinnerAsString(Round.WinnerInfo.Winner) << "\n";
	cout << "_________________________________________________\n" << endl;
}

enWinner CheckFinalWinner(short Player1WonsTimes, short Player2WonsTimes)
{
	if (Player1WonsTimes > Player2WonsTimes)
		return enWinner::Player1;
	else if (Player1WonsTimes < Player2WonsTimes)
		return enWinner::Player2;
	else
		return enWinner::Draw;
}
void PrintFinalResult(stGameInfo& Game)
{

	string Indentation = "\t\t\t";
	cout << Indentation << "_________________________________________________________________\n\n";
	cout << Indentation << Indentation << "+++ G a m e O v e r +++\n";
	cout << Indentation << "_________________________________________________________________\n";
	cout << Indentation << "_________________________[Game Results]__________________________\n";
	cout << Indentation << "Game Rounds       : " << Game.GameRounds << "\n";
	cout << Indentation << "Player1 won times : " << Game.Player1WonsTimes << "\n";
	cout << Indentation << "Player2 won times : " << Game.Player2WonsTimes << "\n";
	cout << Indentation << "Draw times        : " << Game.DrawsTimes << "\n";
	cout << Indentation << "Final Winner      : " << Game.WinnerInfo.WinnerName << "\n";
	cout << Indentation << "_________________________[Game Results]__________________________\n";
	cout << endl;

}

void PlayAgain()
{
	string PlayAgain;
	cout << "\nDo you want to play again ? (Yes,No)\n";
	do {
		cin >> PlayAgain;
	} while (!(PlayAgain == "Yes" || PlayAgain == "No"));
	if (PlayAgain == "Yes")
	{
		StartGame();
		system("cls");
	}
}

void PlayGame(stGameInfo& Game, stRoundInfo& Round)
{
	Game.GameRounds = ReadPositiveNumber("How many rounds the game will be ?");
	Game.Player2 = SelectPlayer2();

	for (Round.RoundNumber = 1; Round.RoundNumber <= Game.GameRounds; Round.RoundNumber++)
	{
		system("color 0f");

		cout << "\n\nRound [" << Round.RoundNumber << "] begins : \n\n";
		PrintChoices();
		Round.Player1Choice = ReadPlayer1Choice(Game.Player2);
		Round.Player2Choice = ReadPlayer2Choice(Game.Player2);
		Round.WinnerInfo.Winner = CheckWinner(Round.Player1Choice, Round.Player2Choice);
		Round.WinnerInfo.WinnerName = GetWinnerAsString(Round.WinnerInfo.Winner);

		SetWinnerConsoleColor(Round.WinnerInfo.Winner);
		PrintRoundResult(Round, Game);

		GameSatistics(Round.WinnerInfo.Winner, Game);

		this_thread::sleep_for(chrono::seconds(1));
	}
	Game.WinnerInfo.Winner = CheckFinalWinner(Game.Player1WonsTimes, Game.Player2WonsTimes);
	Game.WinnerInfo.WinnerName = GetWinnerAsString(Game.WinnerInfo.Winner);

	SetWinnerConsoleColor(Game.WinnerInfo.Winner);
	PrintFinalResult(Game);

	this_thread::sleep_for(chrono::seconds(2));
	system("color 0f");
}

void StartGame()
{
	stGameInfo Game;
	stRoundInfo Round;

	PlayGame(Game, Round);

	PlayAgain();

}


int main()
{
	srand((unsigned)time(NULL));

	StartGame();


	return 0;
}