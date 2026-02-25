#pragma once
#include <iostream>
#include <stack>
using namespace std;

class clString
{
private:
	string _value;
	stack <string> _st_undo_history;
	stack <string> _st_redo_history;

public:
	clString()
	{
		_value = "";
	}
	clString(const string& value)
	{
		_value = value;
	}

	void SetValue(const string &value)
	{
		_st_undo_history.push(_value);

		_value = value;
	}
	string GetValue()
	{
		return _value;
	}
	__declspec(property(put = SetValue, get = GetValue))string Value;

	void Undo()
	{
		if (_st_undo_history.empty())
			return;

		_st_redo_history.push(_value);

		_value = _st_undo_history.top();
		_st_undo_history.pop();
	}
	void Redo()
	{
		if (_st_redo_history.empty())
			return;

		_st_undo_history.push(_value);

		_value = _st_redo_history.top();
		_st_redo_history.pop();
	}
};