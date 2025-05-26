#pragma once
#include<iostream>

#include"clsDbLinkedList.h"

using namespace std;

template <class T>
class clsMyQueue
{
	
protected :
	clsDbLinkedList <int> _MyList;
	
public :

	//////////////////////////////////
	void push(T Item)
	{

		_MyList.InsertAtEnd(Item);

	}


	//////////////////////////////////
	void Print()
	{

		_MyList.PrintList();

	}

	//////////////////////////////////
	T size()
	{

		return _MyList.Size();

	}

	//////////////////////////////////
	T front()
	{

		return _MyList.GetItem(0);

	}

	//////////////////////////////////
	T back()
	{

		return _MyList.GetItem(size() - 1);

	}

	//////////////////////////////////
	void pop()
	{

		_MyList.DeleteFirstNode();

	}

	//////////////////////////////////
	bool IsEmpty()
	{


		return _MyList.IsEmpty();
	}

	//////////////////////////////////
	T GetItem(int Index)
	{

		return _MyList.GetItem(Index);

	}

	//////////////////////////////////
	void Reverse()
	{

		_MyList.Reverse();

	}

	//////////////////////////////////
	void UpdateItem(int Index, int UpdateOfValue)
	{

		_MyList.UpdateItem(Index, UpdateOfValue);

	}

	//////////////////////////////////
	
	void InsertAfter(int Index, int ValueInsert)
	{

		_MyList.InsertAfter(Index, ValueInsert);

	}

	//////////////////////////////////

	void InsertAtFront(int ValueInsert)
	{
		

		_MyList.InsertAtBeginning( ValueInsert);

	}

	//////////////////////////////////

	void InsertAtBack(int ValueInsert)
	{


		_MyList.InsertAtEnd(ValueInsert);

	}

	//////////////////////////////////

	void clear()
	{


		_MyList.Clear();

	}

};

