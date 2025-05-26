
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

	/////////////////
	cout << "\n\nQueue Size :" << MyQueue.size();


	/////////////////
	cout << "\nQueue front :" << MyQueue.front();

	/////////////////
	cout << "\nQueue back :" << MyQueue.back();

	/////////////////
	MyQueue.pop();
	cout << "\n\n\nQueue After pop :\n";
    MyQueue.Print();

	/////////////////1
	cout << "\n\n\Item(2)  : " << MyQueue.GetItem(2);

	/////////////////2
	MyQueue.Reverse();
	cout << "\n\n\Queue After Reverse() :\n";
	MyQueue.Print();


	/////////////////3
	MyQueue.UpdateItem(2,600);
	cout << "\n\n\Queue After Update Item(2) :\n";
	MyQueue.Print();


	/////////////////4
	MyQueue.InsertAfter(2, 800);
	cout << "\n\n\Queue After Insert After :\n";
	MyQueue.Print();

	/////////////////5
	MyQueue.InsertAtFront(1000);
	cout << "\n\n\Queue After Insert At Front :\n";
	MyQueue.Print();


	/////////////////6
	MyQueue.InsertAtBack(2000);
	cout << "\n\n\Queue After Insert At Back :\n";
	MyQueue.Print();

	///////////////////7
	MyQueue.clear();
	cout << "\n\n\Queue After Clear() :\n";
	MyQueue.Print();


	system("pause>0");
	return 0;
}