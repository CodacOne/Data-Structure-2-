#pragma once
#include <iostream>
#include<iomanip>
#include<queue>
#include<string>
#include<stack>
#include<ctime>
#include"clsDate.h"
#include<time.h>



using namespace std;


class clsQueueLine
{
private :


	string _Prefix;
	short    _AverageServeTime;
	short    _TotalTickets = 0;

	//////////////////////////// Sub Class ////////////////////////////
	class clsTicket
	{
	private:

		short 	_Number = 0;
		short   _TotalTickets = 0;
		short   _ServedTimeClients = 0;
		short   _WatingClients;
       string   _Prefix;
	   string   _TicketTime;
	   short   _AverageServeTime;

	public:

		clsTicket(string Prefix ,short Number , short  AverageServeTime,short WatingClients)
		{
			_Number = Number;
			_Prefix = Prefix;
			_TicketTime =clsDate::GetSystemDateAndLocalTime();
			_WatingClients = WatingClients;
			_AverageServeTime = AverageServeTime;
		}

		////////////////////////////


	short ExpectedServeTime()
	{
		return _AverageServeTime * _WatingClients;

	}

	short WatingClients()
	{
		return _WatingClients ;

	}


	void Print()
		{

		cout << left << setw(33) << " " << "    " <<FullNumber() << endl;
		cout << "\n\n";
		cout << left << setw(33) << " " << _TicketTime<< endl;
		cout << left << setw(33) << " " << "Wating Clients = " << _WatingClients << endl;
		cout << left << setw(33) << " " << "Serve Time In  " << endl;
		cout << left << setw(33) << " " << ExpectedServeTime() << " Minutes." << endl;

		
		}

	////////////////////////////
	string FullNumber()
	{

		return _Prefix + to_string(_Number);

	}


	
	};

	//////////////////////////// Sub Class ////////////////////////////

	

public :

	queue <clsTicket> QueueLine;
	queue <clsTicket> QueueTemp;

	stack <clsTicket> TempStack;


	clsQueueLine(string Prefix,short AverageServeTime)
	{
		_TotalTickets = 0;
		_Prefix = Prefix;
		_AverageServeTime = AverageServeTime;
	}

	////////////////////////////

	void IssueTicket()
	{
		_TotalTickets++;
		clsTicket Ticket(_Prefix, _TotalTickets, _AverageServeTime, WatingClients());
		QueueLine.push(Ticket);
		
		
	}

	////////////////////////////
	void PrintQueueInfo()
	{
		cout << left << setw(30) << " " << "_______________________________\n\n";

		cout << left << setw(40) << " " << "Queue Info\n";

		cout << left << setw(30) << " " << "_______________________________\n\n";

	}

	

	////////////////////////
	void PrintTicketsRTL()
	{
		if (QueueLine.empty())
		{

			cout << "\t\t\t\tNo Tickets.\n";
		}
		
		else
			cout << "\n\n";
			// Create cope of Queue Original 
		QueueTemp = QueueLine;


		cout << left << setw(20) << " " << "Tickets : ";
		while (!QueueTemp.empty())
		{
			//FullNumber();
			clsTicket Ticket = QueueTemp.front();
			cout << Ticket.FullNumber() << " <-- ";
			QueueTemp.pop();
		}
		
		cout << "\n";
	}

	////////////////////////////

	void PrintTicketsLTR()
	{
		if (QueueLine.empty())
		{

			cout << "\t\t\t\tNo Tickets.\n";
		}

		else

		QueueTemp = QueueLine;
		
		while (!QueueTemp.empty())
		{
			TempStack.push(QueueTemp.front());
			QueueTemp.pop();
		}

		cout << left << setw(20) << " " << "Tickets : ";

		while (!TempStack.empty())
		{
			
			clsTicket Ticket = TempStack.top();
			cout << Ticket.FullNumber() << " --> ";
			TempStack.pop();
		}

		cout << "\n";


	

	}


	////////////////////////////

	int Size()
	{
		return QueueLine.size();
	}


	////////////////////////////

	short WatingClients()
	{
		return QueueLine.size();
	}

	////////////////////////////

	short ServedClients()
	{
		return _TotalTickets - WatingClients();
	}

	////////////////////////////

	bool ServeNextClients()
	{
		if (QueueLine.empty())
		{
			return false;
		}

		else
			QueueLine.pop();
		return true;
	}


	////////////////////////////

	void PrintInfo()
	{
		PrintQueueInfo();
		cout << left << setw(33) << " " << "Prefix = " << _Prefix << endl;
		cout << left << setw(33) << " " << "Total Tickets  = "<< _TotalTickets<<endl;
		cout << left << setw(33) << " " << "Served Clients = "<< ServedClients() << endl;
		cout << left << setw(33) << " " << "Wating Clients = "<< WatingClients() << endl;
	//	cout << left << setw(30) << " " << "_______________________________\n\n";
	}



	////////////////////////////

	void PrintAllTickets()
	{

		if (QueueLine.empty())
		{
			cout << "\t\t\t\tNo Tickets.\n";
		}

		else
		QueueTemp = QueueLine;

		cout << "\n\n\n";
		cout << left << setw(33) << " " << "- - -Tickets- - -  \n\n";
	

		while (!QueueTemp.empty())
		{
			cout << left << setw(30) << " " << "_______________________________\n\n";
			QueueTemp.front().Print();
			QueueTemp.pop();
			cout << left << setw(30) << " " << "_______________________________\n\n";
		}
		
		
	}


};

