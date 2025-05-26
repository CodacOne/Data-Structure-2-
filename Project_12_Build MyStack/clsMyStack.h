#pragma once
#include<iostream>
#include"clsMyQueue.h"


using namespace std;

template <class T>
class clsMyStack : public clsMyQueue < T >
{


public:

	//////////////////////////////////
	void push(T Item)
	{
		clsMyQueue <T> ::_MyList.InsertAtBeginning(Item);
	

	}


	//////////////////////////////////
	void Print()
	{
		clsMyQueue <T>::Print();
		
	}

	//////////////////////////////////
	T size()
	{
		
		return clsMyQueue <T>::size();

	}

	//////////////////////////////////
	T Top()
	{
		return clsMyQueue <T>::front();
		
	}

	//////////////////////////////////
	T Bottom()
	{
		
		return clsMyQueue <T>::GetItem(size() - 1);
	}

	//////////////////////////////////
	void pop()
	{

	 clsMyQueue <T>::pop();
	}

	//////////////////////////////////
	bool IsEmpty()
	{

		return clsMyQueue <T>::IsEmpty();
		 
	}

	//////////////////////////////////
	T GetItem(int Index)
	{
		return clsMyQueue <T>::GetItem(Index);

	}

	//////////////////////////////////
	void Reverse()
	{

		clsMyQueue <T>::Reverse();
	}

	//////////////////////////////////
	void UpdateItem(int Index, int UpdateOfValue)
	{

		clsMyQueue <T>::UpdateItem(Index, UpdateOfValue);
	}

	//////////////////////////////////

	void InsertAfter(int Index, int ValueInsert)
	{
		clsMyQueue <T>::InsertAfter(Index, ValueInsert);

	}


	//////////////////////////////////

	void InsertAtFront(int ValueInsert)
	{

		clsMyQueue <T>::InsertAtFront( ValueInsert);

	}

	//////////////////////////////////

	void InsertAtBack(int ValueInsert)
	{

		clsMyQueue <T>::InsertAtBack(ValueInsert);

	}

	//////////////////////////////////

	void clear()
	{

		clsMyQueue <T>::clear();
	}

};

