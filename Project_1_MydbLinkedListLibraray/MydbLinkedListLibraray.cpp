
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

	clsDbLinkedList <int>::Node* N1 = MyclsDbLinkedList.Find(2);

	cout << "\n\n";
	if (N1 != NULL)
	{
		cout << "\nNode is Found -)\n";

	}

	else
	{
		cout << "\nNode is Not Found -(\n";
	}

	////////////////
	cout << "\n\n";
	MyclsDbLinkedList.InsertAfter(N1,500);
	cout << "After Inserting 500 After 2 :\n";
	MyclsDbLinkedList.PrintList();


	////////////////
	cout << "\n\n";
	MyclsDbLinkedList.InsertAtEnd(700);
	cout << "After Inserting 700 At End :\n";
	MyclsDbLinkedList.PrintList();

	////////////////
	cout << "\n\n";
	MyclsDbLinkedList.DeleteNode(4);
	cout << "After Deleting Node 4 :\n";
	MyclsDbLinkedList.PrintList();

	////////////////
	cout << "\n\n";
	MyclsDbLinkedList.DeleteNode(4);
	cout << "After Deleting Node 4 :\n";
	MyclsDbLinkedList.PrintList();

	////////////////
	cout << "\n\n";
	MyclsDbLinkedList.DeleteFirstNode();
	cout << "After Deleting First Node  :\n";
	MyclsDbLinkedList.PrintList();

	////////////////
	cout << "\n\n";
	MyclsDbLinkedList.DeleteLastNode();
	cout << "After Deleting Last Node  :\n";
	MyclsDbLinkedList.PrintList();

	system("pause>0");
	return 0;
}