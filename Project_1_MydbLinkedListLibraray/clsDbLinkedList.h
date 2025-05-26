#pragma once
#include<iostream>

using namespace std;

///////////////////////////////////////////
template <typename T>
class clsDbLinkedList
{


public:

	class Node 
	{
	public :
		T  Value;
		Node* next;
		Node* prev;

	};
	
	Node* head = NULL;


////////////////////////////// Insert At Beginning To Double Linked LIst

 void InsertAtBeginning( T Value)
	{

		Node* new_Node = new Node();

		new_Node->Value = Value;

		new_Node->next = head;
		new_Node->prev = NULL;



		if (head != NULL)
		{
			head->prev = new_Node;

		}
		head = new_Node;

	}

///////////////////////////////////////////Print List
	 void PrintList()
	 {
		 Node* Current = head;

		 while (Current != NULL)
		 {
			 cout << Current->Value << " ";
			 Current = Current->next;

		 }
		 delete Current;
	 }

 ////////////////////////////////////////////////////////////////////////
	 Node* Find( T Value)
	 { 
		 Node* Current = head;

		 while (Current != NULL)
		 {
			 if (Current->Value == Value)
			 {

				 return Current;

			 }

			 Current = Current->next;
		 }

		 return NULL;
	 }
	 
///////////////////////////////////////////Print List Details
 void PrintListDetails()

	 {
		 cout << "\n\n";

		 while (head != NULL)
		 {

			 PrintNodeDetails();
			 head = head->next;
			 cout << "\n";
		 }

	 }


 /////////////////////////////
 void InsertAfter(Node* Current, T Value)
 {
	 
	 if (Current == NULL)
	 {
		 cout << "the given previous node cannot be NULL";
		 return;
	 }

	 Node* new_Node = new Node();

	 new_Node->Value = Value;

	 new_Node->next = Current->next;

	 new_Node->prev = Current;

	 if (Current->next != NULL)
	 {
		 Current->next->prev = new_Node;
	 }


	 Current->next = new_Node;

 }



/////////////////////////////////
 void InsertAtEnd( T Value)
 {

	 Node* new_Node = new Node();

	 new_Node->Value = Value;

	 if (head == NULL)
	 {
		 new_Node->prev = NULL;
		 head = new_Node;
	 }

	 else
	 {
		 Node* Current = head;
		 while (Current->next != NULL)
		 {

			 Current = Current->next;
		 }

		 new_Node->next = NULL;

		 new_Node->prev = Current;
		 Current->next = new_Node;

	 }

 }

/////////////////////////////////
 void DeleteNode( T Value)
 {
	 Node* Current = head;
	 if (Current == NULL)
	 {
		 return;

	 }


	 while (Current != NULL)
	 {
		 if (Current->Value == Value)
		 {
			 Current->next->prev = Current->prev;
			 Current->prev->next = Current->next;
			 delete Current;
			 return;
		 }

		 Current = Current->next;
	 }

 }


 /////////////////////////////////
 void DeleteFirstNode()
 {
	 Node* Current = head;

	 if (head == NULL)
	 {
		 return;

	 }

	 else

		 Current->next->prev = Current->prev;
	 head = Current->next;
	 delete Current;

 }



///////////////////////////////
void DeleteLastNode()
{
	Node* Current = head;

	if (Current == NULL)
	{
		return;

	}

	if (Current->next == NULL)
	{
		delete Current;
		Current = NULL;
		return;
	}
	else


		while (Current != NULL)
		{
			if (Current->next == NULL)
			{

				Current->prev->next = Current->next;

				delete Current;
				return;
			}

			Current = Current->next;

		}

}

 ///////////////////////////////////////////Print Node Details
void PrintNodeDetails()
	{
		if (head->prev != NULL)
		{

			cout << head->prev->Value;
		}


		else

		{
			cout << "NULL";
		}

		cout << " <-- > " << head->Value << " <--> ";


		if (head->next != NULL)
		{

			cout << head->next->Value << "\n";
		}


		else
		{
			cout << "NULL";
		}

	}


};
