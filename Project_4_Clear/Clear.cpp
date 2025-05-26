
#include<iostream>
#include"clsDbLinkedList.h"
using namespace std;


int main()
{

	clsDbLinkedList <int> MyclsDbLinkedList;

	MyclsDbLinkedList.InsertAtBeginning(5);
	MyclsDbLinkedList.InsertAtBeginning(4);
	MyclsDbLinkedList.InsertAtBeginning(3);
	MyclsDbLinkedList.InsertAtBeginning(2);
	MyclsDbLinkedList.InsertAtBeginning(1);

	cout << "\nLinked List Content :\n";
	MyclsDbLinkedList.PrintList();

	///////////////////////
	cout << "\n\n";
	cout << "Number Of items in the Linked List   : " << MyclsDbLinkedList.Size();
	cout << "\nExecuting.Clear()\n";
	MyclsDbLinkedList.Clear();
	cout << "\nNumber Of items in the Linked List : " << MyclsDbLinkedList.Size();

	system("pause>0");
	return 0;
}