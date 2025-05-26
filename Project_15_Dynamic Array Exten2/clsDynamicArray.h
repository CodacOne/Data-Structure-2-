#pragma once
#include<iostream>



using namespace std;

template <class T> 
class clsDynamicArray
{

protected :

	
	int _size;
	T* tempArray;

public:
		T *OriginalArray;

	

	////////////////////////////// Parametarized Constructor
	clsDynamicArray(int Size)
	{
		_size = 0;
		_size = Size;
		OriginalArray = new T[_size];
		
	}

	///// Destructor for Delete Array
	~clsDynamicArray()
	{
		delete [] OriginalArray;

	}

	//////////////////////////////
	bool setItem(int Index,int Value)
	{
		if (Index >=_size || Index<0)
		{
			return false;
		}

	  OriginalArray[ Index] = Value;
	  return true;

	}


	//////////////////////////////
	bool IsEmpty()
	{
	
		
		return (_size == 0 ? true : false);

	}

	//////////////////////////////
	int size()
	{

		return _size;
	}


	//////////////////////////////
	void Print()
	{

		for (int i=0; i< _size ; i++)
		{
			cout << OriginalArray [i] << " ";
		}
	
		cout << endl;
	}


	//////////////////////////////
	void Resize(int NewSize)
	{
		if (NewSize <0)
		{

			_size = 0;
				
		}

		tempArray = new T[NewSize];

		for (int i=0; i < NewSize ;i++)
		{
			tempArray[i] = OriginalArray[i];

		}

		_size = NewSize;

		delete[] OriginalArray;

		OriginalArray = tempArray;
	}

	//////////////////////////////

	T GetItem(int Index)
	{

		return OriginalArray[Index];

	}

	//////////////////////////////

	void Reverse()
	{ 
		tempArray = new T[_size];
		short Counter = 0;

		for (int i = _size-1; i >= 0; i--)
	{
			tempArray[Counter] = OriginalArray[i];
			Counter++;
	}

		delete[] OriginalArray;

		OriginalArray = tempArray;
		
	}

	//////////////////////////////

	void Clear()
	{
	
		_size = 0;

		tempArray = new T[0];

		delete[] OriginalArray;
		OriginalArray = tempArray;

	}



};

