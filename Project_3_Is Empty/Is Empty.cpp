
#include<iostream>
#include"clsDbLinkedList.h"
using namespace std;

int main()
{

	clsDbLinkedList <int> MyclsDbLinkedList;

	if (MyclsDbLinkedList.IsEmpty())
	{
		cout << "\n\nYes,List is Empty.\n";

	}

	else 

		cout << "No,List is Not Empty.\n";

	MyclsDbLinkedList.InsertAtBeginning(5);
	MyclsDbLinkedList.InsertAtBeginning(4);
	MyclsDbLinkedList.InsertAtBeginning(3);
	MyclsDbLinkedList.InsertAtBeginning(2);
	MyclsDbLinkedList.InsertAtBeginning(1);

	cout << "\nLinked List Content :\n";
	MyclsDbLinkedList.PrintList();

	///////////////////////
	cout << "\n\n";

	if (MyclsDbLinkedList.IsEmpty())
	{
		cout << "Yes,List is Empty.\n";

	}

	else

		cout << "No,List is Not Empty.\n";


	system("pause>0");
	return 0;
}
