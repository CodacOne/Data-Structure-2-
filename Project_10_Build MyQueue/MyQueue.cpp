
#include<iostream>
#include"clsDbLinkedList.h"
#include"clsMyQueue.h"


using namespace std;


int main()
{

	clsMyQueue <int> MyQueue;

	MyQueue.push(10);
	MyQueue.push(20);
	MyQueue.push(30);
	MyQueue.push(40);
	MyQueue.push(50);

	cout << "Queue :\n\n";

	MyQueue.Print();

	cout << "\n\nQueue Size :" << MyQueue.size() ;
	cout << "\nQueue front :" << MyQueue.front() ;

	cout << "\nQueue back :" << MyQueue.back()  ;

	MyQueue.pop();
	cout << "\n\n\nQueue After pop :\n";

	MyQueue.Print();

	system("pause>0");
	return 0;
}