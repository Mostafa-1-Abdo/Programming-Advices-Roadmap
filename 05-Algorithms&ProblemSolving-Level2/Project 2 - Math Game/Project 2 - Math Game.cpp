#include <iostream>
#include <thread>
#include <chrono>
using namespace std;

enum enQuestionsLevel { Easy = 1, Med, Hard, Mix };

enum enOperationType { Add = 1, Sub, Mul, Div, Mixx };

struct stQuestionInfo
{
	int Number1;
	int Number2;
	enOperationType OperationType;
	float Result;
	float RightResult;
	bool ResultStatus;
};

struct stQuizInfo
{
	stQuestionInfo Question[100];
	short QuestionsNumber;
	enQuestionsLevel QuestionsLevel;
	enOperationType OperationType;
	short RightQuestionsTimes = 0;
	short WrongQuestionsTimes = 0;
	bool FinalResultStatus;
};

void MathQuiz();

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

short RandomNumberInRange(short From, short To)
{
	return rand() % (To - From + 1) + From;
}

void SetConsoleColor(bool Status)
{
	if (Status)
		system("color 2f");
	else
		system("color 4f");

}

void GetQuestionRandomNumbersAccordingLevel(enQuestionsLevel QuestionsLevel, stQuestionInfo& Question)
{
	if (QuestionsLevel == enQuestionsLevel::Mix)
		QuestionsLevel = (enQuestionsLevel)RandomNumberInRange(1, 3);
	switch (QuestionsLevel)
	{
	case enQuestionsLevel::Easy:
		Question.Number1 = RandomNumberInRange(1, 10);
		Question.Number2 = RandomNumberInRange(1, 10);
		break;
	case enQuestionsLevel::Med:
		Question.Number1 = RandomNumberInRange(11, 50);
		Question.Number2 = RandomNumberInRange(11, 50);
		break;
	default:
		Question.Number1 = RandomNumberInRange(51, 100);
		Question.Number2 = RandomNumberInRange(51, 100);
	}
}
void GetQuestionOperationType(enOperationType OperationType, stQuestionInfo& Question)
{
	if (OperationType == enOperationType::Mixx)
		OperationType = (enOperationType)RandomNumberInRange(1, 4);
	Question.OperationType = OperationType;
}
void CalculateResult(stQuestionInfo& Question)
{
	switch (Question.OperationType)
	{
	case enOperationType::Add:
		Question.RightResult = Question.Number1 + Question.Number2;
		break;
	case enOperationType::Sub:
		Question.RightResult = Question.Number1 - Question.Number2;
		break;
	case enOperationType::Mul:
		Question.RightResult = Question.Number1 * Question.Number2;
		break;
	default:
		Question.RightResult = (float)Question.Number1 / Question.Number2;
	}
}
stQuestionInfo GenerateQuestion(stQuizInfo Quiz)
{
	stQuestionInfo Question;

	GetQuestionRandomNumbersAccordingLevel(Quiz.QuestionsLevel, Question);
	GetQuestionOperationType(Quiz.OperationType, Question);
	CalculateResult(Question);

	return Question;
}
void GenerateQuizQuestions(stQuizInfo& Quiz)
{
	for (short QuestionNumber = 0; QuestionNumber < Quiz.QuestionsNumber; QuestionNumber++)
		Quiz.Question[QuestionNumber] = GenerateQuestion(Quiz);
}

string GetQuestionOperationSymbol(enOperationType OperationType)
{
	switch (OperationType)
	{
	case enOperationType::Add:
		return "+";
	case enOperationType::Sub:
		return "-";
	case enOperationType::Mul:
		return "*";
	default:
		return "/";
	}
}
void PrintQuestion(stQuizInfo& Quiz, short QuestionNumber)
{
	cout << "\nQuestion [" << QuestionNumber + 1 << "/" << Quiz.QuestionsNumber << "]\n";
	cout << Quiz.Question[QuestionNumber].Number1 << "\n";
	cout << Quiz.Question[QuestionNumber].Number2 << " ";
	cout << GetQuestionOperationSymbol(Quiz.Question[QuestionNumber].OperationType) << "\n_________________\n";
}
bool CheckQuestionResultStatus(stQuestionInfo Question)
{
	return Question.Result == Question.RightResult;
}
void PrintQuestionResultStatus(stQuestionInfo Question)
{
	if (Question.ResultStatus)
		cout << "Right Answer";
	else
	{
		cout << "Wrong Answer\n";
		cout << "The right answer is : " << Question.RightResult;
	}
	cout << "\n";
}
void CalculateQuizStatistics(stQuizInfo& Quiz, short QuestionNumber)
{
	if (Quiz.Question[QuestionNumber].ResultStatus)
		Quiz.RightQuestionsTimes++;
	else
		Quiz.WrongQuestionsTimes++;
}
void PrintAndCorrectQuestions(stQuizInfo& Quiz)
{
	for (short QuestionNumber = 0; QuestionNumber < Quiz.QuestionsNumber; QuestionNumber++)
	{
		PrintQuestion(Quiz, QuestionNumber);

		Quiz.Question[QuestionNumber].Result = ReadNumber("");

		Quiz.Question[QuestionNumber].ResultStatus = CheckQuestionResultStatus(Quiz.Question[QuestionNumber]);

		PrintQuestionResultStatus(Quiz.Question[QuestionNumber]);

		SetConsoleColor(Quiz.Question[QuestionNumber].ResultStatus);

		CalculateQuizStatistics(Quiz, QuestionNumber);

		this_thread::sleep_for(chrono::seconds(1));

		system("color 0f");
	}

}

bool CheckFinalResult(stQuizInfo& Quiz)
{
	return Quiz.RightQuestionsTimes >= Quiz.WrongQuestionsTimes;
}
string GetFinalResult(bool FinalResultStatus)
{
	return FinalResultStatus ? "PASS" : "FAIL";
}
string GetQuestionsLevelAsString(enQuestionsLevel QuestionsLevel)
{
	string ArrayQuestionsLevel[4] = { "Easy","Mid","Hard","Mix" };
	return ArrayQuestionsLevel[QuestionsLevel - 1];
}
string GetOperationTypeAsString(enOperationType OperationType)
{
	string ArrayOperationType[5] = { "Add","Sub","Mul","Div","Mix" };
	return ArrayOperationType[OperationType - 1];
}
void PrintFinalResult(stQuizInfo Quiz)
{
	cout << "\n______________________________________\n";
	cout << "Final Result is " << GetFinalResult(Quiz.FinalResultStatus) << "\n";
	cout << "______________________________________\n";
	cout << "Number of questions     : " << Quiz.QuestionsNumber << "\n";
	cout << "Questions level         : " << GetQuestionsLevelAsString(Quiz.QuestionsLevel) << "\n";
	cout << "Operation type          : " << GetOperationTypeAsString(Quiz.OperationType) << "\n";
	cout << "Number of right answers : " << Quiz.RightQuestionsTimes << "\n";
	cout << "Number of wrong answers : " << Quiz.WrongQuestionsTimes << "\n";
	cout << "______________________________________\n" << endl;
}

void DoingTest(stQuizInfo& Quiz)
{
	Quiz.QuestionsNumber = ReadPositiveNumber("How many questions do you want to answer ?");
	Quiz.QuestionsLevel = (enQuestionsLevel)ReadNumberInRange("Enter questions level [1] Easy, [2] Med, [3] Hard, [4] Mix ?", 1, 4);
	Quiz.OperationType = (enOperationType)ReadNumberInRange("Enter operation type [1] Add, [2] Sub, [3] Mul, [4] Div, [5] Mix ?", 1, 5);

	GenerateQuizQuestions(Quiz);

	PrintAndCorrectQuestions(Quiz);
}

void FinalResult(stQuizInfo Quiz)
{
	this_thread::sleep_for(chrono::seconds(1));

	Quiz.FinalResultStatus = CheckFinalResult(Quiz);
	PrintFinalResult(Quiz);
	SetConsoleColor(Quiz.FinalResultStatus);

	this_thread::sleep_for(chrono::seconds(3));
	system("color 0f");
}

void QuizAgain()
{
	string UserAnswer;

	cout << "\nWould you want to do the test again ? (Yes,No)\n";
	do {
		cin >> UserAnswer;
	} while (!(UserAnswer == "Yes" || UserAnswer == "No"));

	if (UserAnswer == "Yes")
	{
		system("cls");
		MathQuiz();
	}
}

void MathQuiz()
{
	stQuizInfo Quiz;

	DoingTest(Quiz);

	FinalResult(Quiz);

	QuizAgain();
}

int main()
{
	srand((unsigned)time(NULL));

	MathQuiz();

	return 0;
}