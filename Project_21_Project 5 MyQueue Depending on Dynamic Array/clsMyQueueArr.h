#pragma once

#include<iostream>
#include"clsDynamicArray.h"


using namespace std;

template <class T> 
class clsMyQueueArr 
{



protected :
	clsDynamicArray < T > _MyQueue;

	
///////////////////////////////
public:

	///////////////////////////////
	void push(T Value)
	{ 
		
	
		_MyQueue.InsertAtEnd( Value);
		
	}

	///////////////////////////////
	void Pop()
	{
		_MyQueue.DeleteFirstItem();

	}

	///////////////////////////////
	void Print()
	{
		
		_MyQueue.Print();

	}

	///////////////////////////////
	T Size()
	{

	return	_MyQueue.size();

	}

	///////////////////////////////
	T Front()
	{

		return	_MyQueue.GetItem(0);

	}

	///////////////////////////////
	T back()
	{

		return	_MyQueue.GetItem(Size()-1);

	}

	///////////////////////////////
	T GetItem(T Index)
	{

		return	_MyQueue.GetItem(Index);

	}

	///////////////////////////////
	void Reverse()
	{

		return	_MyQueue.Reverse();

	}
	
	///////////////////////////////
		void UpdateItem(T Index,T Value)
	{
			/*_MyQueue.DeleteItem(GetItem(Index));
			_MyQueue.InsertAt(Index, Value);*/
			_MyQueue.setItem(Index, Value);

	}

			///////////////////////////////
		void InsertAfter(T Index, T Value)
	{
		
		_MyQueue.InsertAfter(Index, Value);

	}

			///////////////////////////////
		void InsertAtFront(T Value)
	{

		_MyQueue.InsertAtBeginning( Value);

	}

			///////////////////////////////
		void InsertAtBack(T Value)
	{

		_MyQueue.InsertAtEnd(Value);

	}
			///////////////////////////////
		void clear()
		{

			_MyQueue.Clear();
		}


};

