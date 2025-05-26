
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

	clsDbLinkedList <int> :: Node *N;

	cout << "\nLinked List Content :\n";
	MyclsDbLinkedList.PrintList();

	///////////////////////
	cout << "\n\n";
	

	
	N =MyclsDbLinkedList.GetNode(5);
	cout << "Node Value is : " << N->Value << endl;

	system("pause>0");
	return 0;
}