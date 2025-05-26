#pragma once
#include<iostream>

using namespace std;

///////////////////////////////////////////
template <class T>
class clsDbLinkedList
{
	
protected :
	int _Size;
	
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
		_Size++;
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
	 _Size++;
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
	 _Size++;
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
	 _Size--;
 }


 /////////////////////////////////
 void DeleteFirstNode()
 {
	 

	 if (head == NULL)
	 {
		 return;

	 }

	 Node* tempFirst = head;

	 head = head->next;

	if (head != NULL)
	{
		head->prev = NULL;
	}
	 
	 delete tempFirst;
	 _Size--;


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
	_Size--;
}


///////////////////////////////////////////Print Node Details
int Size()
{
	
	return  _Size;
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

bool IsEmpty()
{

	return (_Size == 0 ? true : false);
}


void Clear()
{


	while (_Size>0)
	{
		DeleteFirstNode();

	}

}

void Reverse()
{
	Node* Current = head;
	Node* temp = NULL;

	while (Current != nullptr)
	{
		temp = Current->prev;
		Current->prev = Current->next;
		Current->next = temp;

		Current = Current->prev;


	}

	if(temp != nullptr)

	{
		head = temp->prev;

	}


}


Node* GetNode(int Index)
{
	Node* Current= head;

	int i = 0;


	if (Index > _Size - 1 || Index <0)
	{
		return NULL;

	}


	while (Current != NULL)
	{
		
		if (i == Index)
		{
			return Current;
		}

		i++;
		Current = Current->next;
	}

	return NULL;

}



T GetItem(int Index)
{
	Node* ItemNode = GetNode(Index);

	if (ItemNode == NULL)
	{
		return NULL;
	}

	return ItemNode->Value;
}



bool UpdateItem(int Index,int UpdateOfValue)
{

	Node* ItemNode = GetNode(Index);

	if (ItemNode != NULL)
	{
		ItemNode->Value = UpdateOfValue;
		return true;
	}
	
	else
		return false;


}



bool InsertAfter(int Index, int InsertsValue)
{

	Node* ItemNode = GetNode(Index);

	if (ItemNode != NULL)
	{
		InsertAfter(ItemNode , InsertsValue);
		return true;
	}

	else
		return false;

}


};




