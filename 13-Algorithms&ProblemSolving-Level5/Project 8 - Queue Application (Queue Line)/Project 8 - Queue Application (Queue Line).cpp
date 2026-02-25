#include <iostream>
#include "clQueueLine.h"
using namespace std;

int main()
{
    clQueueLine PayBillsQueue("A0", 10);

    PayBillsQueue.PrintQueueLineLtR();
    PayBillsQueue.PrintQueueLineRtL();
    PayBillsQueue.PrintAllTickets();

    PayBillsQueue.ServeNextClient();
    PayBillsQueue.IssueTicket();
    PayBillsQueue.IssueTicket();
    PayBillsQueue.IssueTicket();
    PayBillsQueue.IssueTicket();

    PayBillsQueue.PrintQueueLineLtR();
    PayBillsQueue.PrintQueueLineRtL();

}