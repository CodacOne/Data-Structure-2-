#pragma once
#include<iostream>



using namespace std;

template <class T> 
class clsDynamicArray
{

protected :

	
	int _size;
	T* _tempArray;

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

		_tempArray = new T[NewSize];

		for (int i=0; i < NewSize ;i++)
		{
			_tempArray[i] = OriginalArray[i];

		}

		_size = NewSize;

		delete[] OriginalArray;

		OriginalArray = _tempArray;
	}

	//////////////////////////////

	T GetItem(int Index)
	{

		return OriginalArray[Index];

	}

	//////////////////////////////

	void Reverse()
	{ 
		_tempArray = new T[_size];
		short Counter = 0;

		for (int i = _size-1; i >= 0; i--)
	{
			_tempArray[Counter] = OriginalArray[i];
			Counter++;
	}

		delete[] OriginalArray;

		OriginalArray = _tempArray;
		
	}

	//////////////////////////////

	void Clear()
	{
	
		_size = 0;

		_tempArray = new T[0];

		delete[] OriginalArray;
		OriginalArray = _tempArray;

	}


	//////////////////////////////

	// Of  Solution an En.Mohammed abu_Hadhoud

	bool DeleteItemAt( int Index)
	{
		if (Index >= _size || Index<0)
		{

			return false;
		}
		_size--;
		_tempArray = new T[_size];


		for (int i = 0 ; i < Index; i++)
		{
				_tempArray[i] = OriginalArray[i];
		
		}
		
	

		for (int i = Index+1 ; i <= _size; i++)
		{
			_tempArray[i-1] = OriginalArray[i];

		}

		delete[] OriginalArray;

		OriginalArray = _tempArray;

		return true;
	}

	// Of My Solution
	/*void DeleteItemAt(int Index)
	{
		tempArray = new T[_size];
		short Counter = 0;

		for (int i = 0 ; i < _size; i++)
		{
			if (Index != i)
			{
				tempArray[Counter] = OriginalArray[i];
				Counter++;
			}
			
			
		}
		_size = Counter;
		delete[] OriginalArray;

		OriginalArray = tempArray;

	}

	bool DeleteFirstItem()
	{
		if ( _size == 0)
		{

			return false;
		}
		_size--;
		tempArray = new T[_size];


		for (int i = 1; i <= _size; i++)
		{
			tempArray[i-1] = OriginalArray[i];

		}

		delete[] OriginalArray;

		OriginalArray = tempArray;

		return true;
	}
	


	/////////////////
	bool DeleteLastItem()
	{
		if (_size == 0)
		{

			return false;
		}
		_size--;
		tempArray = new T[_size];


		for (int i = 0; i <= _size-1; i++)
		{
			tempArray[i ] = OriginalArray[i];

		}

		delete[] OriginalArray;

		OriginalArray = tempArray;

		return true;
	}
	*/

	//////////////////////////////
	void DeleteFirstItem()
	{
		DeleteItemAt(0);
	}

	void DeleteLastItem()
	{
		DeleteItemAt(_size-1);
	}

	//////////////////////////////


	int Find(int Value)
	{
		for (int i=0 ; i< _size ; i++)
		{
			if ( Value==OriginalArray[i])
			{
				return i;
			}

		}

		return -1;
	}

	////////////////////////////

	bool DeleteItem(int Value)
	{
		int Index=Find(Value);

		if (Index==-1)
		{
			return false;
		}
		DeleteItemAt(Index);
		return true;
	}

	bool InsertAt(int Index, int Value)
	{

		/*Index =Find(GetItem(Index));
		setItem(Index, Value);*/
		if (Index > _size || Index < 0)
		{

			return false;
		}

		_size++;
		
		_tempArray = new T[_size];

	

		for (int i = 0; i < Index; i++)
		{
			_tempArray[i] = OriginalArray[i];
			
		}

		_tempArray[Index] = Value;

		for (int i = Index ; i <_size-1; i++)
		{
			_tempArray[i+1] = OriginalArray[i];

		}

		delete[] OriginalArray;
		OriginalArray = _tempArray;
		
		return true;
	}

	//////////////////////////////////

	void InsertAtBeginning(T Value)
	{
		InsertAt(0, Value);
	}

	bool InsertBefore(T Index , T Value)
	{
		if (Index < 1)
			return InsertAt(0, Value);
		else
			return InsertAt(Index - 1, Value);
	}


	bool InsertAfter(T Index, T Value)
	{
		if (Index >= _size)
			return InsertAt(_size - 1, Value);
		else
			return InsertAt(Index + 1, Value);

		
	}

	bool InsertAtEnd( T Value)
	{
		return InsertAt(_size, Value);
	}

};

