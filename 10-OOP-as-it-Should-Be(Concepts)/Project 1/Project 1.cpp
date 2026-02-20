#include <iostream>
using namespace std;

class clCalculator
{
private:
	enum enOperation
	{
		OpClear, OpAdd, OpSubtract, OpMultiply, OpDivide, DivideByZero, OpCancelLastOperation
	};

	float _CurrentResult = 0;
	float _PreviousResult = 0;
	//Printing
	float _LastValue = 0;
	enOperation _LastOperation = enOperation::OpClear;

	string GetOperationName(const enOperation Operation)
	{
		switch (Operation)
		{
		case enOperation::OpClear: return "clear";
		case enOperation::OpAdd: return "adding";
		case enOperation::OpSubtract: return "subtracting";
		case enOperation::OpMultiply: return "multiplying";
		case enOperation::OpDivide: return "dividing";
		case enOperation::DivideByZero: return "Error : divide by zero\n";
		case enOperation::OpCancelLastOperation: return "cancel last operation";
		}
	}
	void UpdateLastOperation(const float Value, const enOperation Operation)
	{
		_PreviousResult = _CurrentResult;

		_LastOperation = Operation;
		_LastValue = Value;
	}
public:
	void Clear()
	{
		UpdateLastOperation(0, enOperation::OpClear);
		_CurrentResult = 0;
	}

	void Add(const float Value)
	{
		UpdateLastOperation(Value, enOperation::OpAdd);
		_CurrentResult += Value;
	}

	void Subtract(const float Value)
	{
		UpdateLastOperation(Value, enOperation::OpSubtract);
		_CurrentResult -= Value;
	}

	void Multiply(const float Value)
	{
		UpdateLastOperation(Value, enOperation::OpMultiply);
		_CurrentResult *= Value;
	}

	void Divide(const float Value)
	{
		if (Value == 0)
		{
			_LastOperation = enOperation::DivideByZero;
			return;
		}
		UpdateLastOperation(Value, enOperation::OpDivide);
		_CurrentResult /= Value;
	}

	void CancelLastOperation()
	{
		_CurrentResult = _PreviousResult;
		UpdateLastOperation(0, enOperation::OpCancelLastOperation);
	}

	void PrintResult()
	{
		if (_LastOperation == enOperation::DivideByZero)
			cout << GetOperationName(_LastOperation);
		else if (_LastOperation == enOperation::OpClear || _LastOperation == enOperation::OpCancelLastOperation)
			cout << "Result after " << GetOperationName(_LastOperation) << " is : " << _CurrentResult << "\n";
		else
			cout << "Result after " << GetOperationName(_LastOperation) << " " << _LastValue << " is : " << _CurrentResult << "\n";
	}
};

int main()
{
	clCalculator Calculator1;

	Calculator1.Clear();

	Calculator1.Add(10);
	Calculator1.PrintResult();

	Calculator1.Add(100);
	Calculator1.PrintResult();

	Calculator1.Subtract(20);
	Calculator1.PrintResult();

	Calculator1.Divide(0);
	Calculator1.PrintResult();

	Calculator1.Divide(2);
	Calculator1.PrintResult();

	Calculator1.Multiply(3);
	Calculator1.PrintResult();

	Calculator1.Clear();
	Calculator1.PrintResult();

	Calculator1.Divide(0);
	Calculator1.PrintResult();

	Calculator1.CancelLastOperation();
	Calculator1.PrintResult();

	Calculator1.Add(100);
	Calculator1.PrintResult();
}