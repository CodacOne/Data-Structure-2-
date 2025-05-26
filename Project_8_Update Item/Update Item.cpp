
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
	MyclsDbLinkedList.UpdateItem(2,500);
	cout << "After Updating Item is : \n\n";
	MyclsDbLinkedList.PrintList();


	system("pause>0");
	return 0;
}