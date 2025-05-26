
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

	cout << "Item(2) Value is : " << MyclsDbLinkedList.GetItem(0);

	system("pause>0");
	return 0;
}