#include <iostream>

#include"clsQueueLine.h"

using namespace std;

int main()
{
	clsQueueLine PayBillsQueue("A0",10);
	clsQueueLine SubscriptionsQueue("B0",5);

	
	////////////////////
	PayBillsQueue.IssueTicket();
	PayBillsQueue.IssueTicket();
	PayBillsQueue.IssueTicket();
	PayBillsQueue.IssueTicket();
	PayBillsQueue.IssueTicket();

	////////////////////
	cout << "\nPay Bills Queue Info:\n\n\n";
	PayBillsQueue.PrintInfo();

	////////////////////
	PayBillsQueue.PrintTicketsRTL();

	//// cout << "\n\n " << PayBillsQueue.Size() << endl;
	
	PayBillsQueue.PrintTicketsLTR();

	////////////////////
	cout << "\n\n ";
	PayBillsQueue.PrintAllTickets();
	
	////////////////////
	cout << "\n\nPay Bills Queue After Serving One Client \n\n";
	PayBillsQueue.ServeNextClients();
	PayBillsQueue.PrintInfo();

	//////////////////////
	//cout << "\n\nPay Bills Queue After Serving One Client \n\n";
     //PayBillsQueue.ServeNextClients();
	  //PayBillsQueue.PrintInfo();


	////////////////////
	cout << "\n\nSubscriptions Queue Info\n\n";
	SubscriptionsQueue.IssueTicket();
	SubscriptionsQueue.IssueTicket();
	SubscriptionsQueue.IssueTicket();

	SubscriptionsQueue.PrintInfo();

	////////////////////
	SubscriptionsQueue.PrintTicketsRTL();

	////////////////////
	SubscriptionsQueue.PrintTicketsLTR();

	////////////////////
	cout << "\n\n ";
	SubscriptionsQueue.PrintAllTickets();

	////////////////////
	cout << "\n\nSubscriptions Queue After Serving One Client \n\n";
	SubscriptionsQueue.ServeNextClients();
	SubscriptionsQueue.PrintInfo();


	system("pause>0");
	return 0;
}