#pragma once

#include<iostream>
#include"clsDynamicArray.h"
using namespace std;


template <class T> 
class clsStakArr
{
protected :
	clsDynamicArray < int > _MyList;

public :


	///////////////////////////////////
	void push(T Value)
	{
		_MyList.InsertAtBeginning(Value);

	}

	///////////////////////////////////
	void Print()
	{
		_MyList.Print();

	}

	///////////////////////////////////
	T size()
	{
		return _MyList.size();

	}



	///////////////////////////////////
	T Top()
	{
		return _MyList.GetItem(0);

	}


	///////////////////////////////////
	T Bottom()
	{
		return _MyList.GetItem(size()-1);

	}

	///////////////////////////////////
	void pop()
	{
		_MyList.DeleteFirstItem();

	}
	

	///////////////////////////////////
	T GetItem(T Index)
	{
		return _MyList.GetItem(Index);

	}

	///////////////////////////////////
	void Reverse()
	{
		_MyList.Reverse();

	}

	///////////////////////////////////
	void UpdateItem(T Index ,T Value)
	{
		_MyList.setItem(Index, Value);

	}


	///////////////////////////////////
	void InsertAfter(T Index, T Value)
	{
		_MyList.InsertAfter(Index, Value);

	}
	

	///////////////////////////////////
	void InsertAtFront( T Value)
	{
		_MyList.InsertAtBeginning( Value);

	}

	///////////////////////////////////
	void InsertAtBack(T Value)
	{
		_MyList.InsertAtEnd(Value);

	}

	///////////////////////////////////
	void Clear()
	{
		_MyList.Clear();

	}

	
};

