#pragma once
#include <iostream>
#include <queue>
#include <stack>
#include <string>
#include "clDate.h"
#include "clUtil.h"
using namespace std;

class clQueueLine
{
private:
	string _prefix;
	short _avservice_time;
    
	string _current_number ;

	short  _served_clients = 0;

	struct stTicket
	{
		string number;
		string date;
		string time;
	};
	queue <stTicket> _qu_waiting_tickets;

	string _GetNextNumber()
	{
		char letter_part = _current_number[0];
		short number_part = (short)stoi(_current_number.substr(1));

		number_part++;
		if (number_part == 100)
		{
			number_part = 0;
			letter_part++;
		}

		string number_part_asstring = to_string(number_part);
		if (number_part_asstring.length() == 1)
			number_part_asstring = "0" + number_part_asstring;

		_current_number = string(1,letter_part) + number_part_asstring;
		return _current_number;
	}

	void _PrintTicket(const stTicket &Ticket,const short wating_clients)
	{
		cout << clUtil::Spaces(30) << "___________________________________\n\n";
		cout << clUtil::Spaces(45) << Ticket.number<<"\n";
		cout << clUtil::Spaces(36) << Ticket.date << " - " << Ticket.time << "\n";
		cout << clUtil::Spaces(37) << "Wating Clients = " << wating_clients << "\n";
		cout << clUtil::Spaces(35) << "Serve time in around " << wating_clients * _avservice_time<< "\n";
		cout << clUtil::Spaces(30) << "___________________________________\n";
	}

public:
	clQueueLine(const string& prefix, const short avservice_time)
	{
		_prefix = prefix;
		_avservice_time = avservice_time;
		_current_number = prefix + "0";
	}

	void IssueTicket()
	{
		_qu_waiting_tickets.emplace(_GetNextNumber(), clDate::GetToday().ConvertToString(), clDate::GetTimeAsString());
	}

	void ServeNextClient()
	{
		if (_qu_waiting_tickets.empty())
		{
			cout << "There is not waiting clients\n";
			return;
		}

		_qu_waiting_tickets.pop();

		_served_clients++;
	}

	string GetNextClient()
	{
		if (!_qu_waiting_tickets.empty())
			return _qu_waiting_tickets.front().number;

		return "There is not waiting clients\n";
	}

	void PrintInfo()
	{
		cout << clUtil::Spaces(30) << "___________________________________\n\n";
		cout << clUtil::Spaces(40) << "Queue Line Info\n";
		cout << clUtil::Spaces(30) << "___________________________________\n\n";
		cout << clUtil::Spaces(33) << "Prefix = " << _prefix << "\n";
		cout << clUtil::Spaces(33) << "Total Tickets = " << _served_clients + _qu_waiting_tickets.size() << "\n";
		cout << clUtil::Spaces(33) << "Served Clients = " << _served_clients << "\n";
		cout << clUtil::Spaces(33) << "Wating Clients = " << _qu_waiting_tickets.size() << "\n";
		cout << clUtil::Spaces(30) << "___________________________________\n";
	}
	void PrintQueueLineLtR()
	{
		if (_qu_waiting_tickets.empty())
		{
			cout << "There is not waiting clients\n";
			return;
		}

		queue <stTicket> tempqu_waiting_tickets = _qu_waiting_tickets;

		cout << "Tickets : " << tempqu_waiting_tickets.front().number;
		for (short i = tempqu_waiting_tickets.size() - 2; i >= 0; i--)
		{
			tempqu_waiting_tickets.pop();

			cout << " <-- " << tempqu_waiting_tickets.front().number;
		}
		cout << "\n";
	}
	void PrintQueueLineRtL()
	{
		if (_qu_waiting_tickets.empty())
		{
			cout << "There is not waiting clients\n";
			return;
		}

		queue <stTicket> tempqu_waiting_tickets = _qu_waiting_tickets;
		stack <stTicket> tempst_waiting_tickets;

		while(!tempqu_waiting_tickets.empty())
		{
			tempst_waiting_tickets.push(tempqu_waiting_tickets.front());
			tempqu_waiting_tickets.pop();
		}

		cout << "Tickets : " << tempst_waiting_tickets.top().number;
		for (short i = tempst_waiting_tickets.size() - 2; i >= 0; i--)
		{
			tempst_waiting_tickets.pop();

			cout << " --> " << tempst_waiting_tickets.top().number;
		}
		cout << "\n";

	}
	void PrintAllTickets()
	{
		if (_qu_waiting_tickets.empty())
		{
			cout << "There is not waiting clients\n";
			return;
		}

		queue <stTicket> tempqu_waiting_tickets = _qu_waiting_tickets;

		short number_of_watting_tickets = (short)tempqu_waiting_tickets.size();
		for (short i = 0; i < number_of_watting_tickets; i++)
		{
			_PrintTicket(tempqu_waiting_tickets.front(), i);

			tempqu_waiting_tickets.pop();
		}
	}
};