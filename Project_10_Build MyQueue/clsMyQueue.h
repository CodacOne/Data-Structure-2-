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

	void push(T Item)
	{

		_MyList.InsertAtEnd(Item);

	}

	void Print()
	{

		_MyList.PrintList();

	}

	T size()
	{

		return _MyList.Size();

	}

	T front()
	{

		return _MyList.GetItem(0);

	}

	T back()
	{

		return _MyList.GetItem(size() - 1);

	}

	void pop()
	{

		_MyList.DeleteFirstNode();

	}

	bool IsEmpty()
	{


		return _MyList.IsEmpty();
	}


};

