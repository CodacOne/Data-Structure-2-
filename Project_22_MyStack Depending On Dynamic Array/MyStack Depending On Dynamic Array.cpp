
#include<iostream>
#include"clsStakArr.h"
#include"clsDynamicArray.h"

using namespace std;


int main()
{

	clsStakArr <int> MyStack;

	MyStack.push(10);
	MyStack.push(20);
	MyStack.push(30);
	MyStack.push(40);
	MyStack.push(50);

	cout << "Stack :\n\n";

	MyStack.Print();

	/////////////////
	cout << "\n\nStack Size :" << MyStack.size();


	/////////////////
	cout << "\nStack Top :" << MyStack.Top();

	/////////////////
	cout << "\nStack Bottom :" << MyStack.Bottom();

	/////////////////
	MyStack.pop();
	cout << "\n\n\nStack After pop :\n";
	MyStack.Print();

	/////////////////1
	cout << "\n\n\Item(2)  : " << MyStack.GetItem(2);

	/////////////////2
	MyStack.Reverse();
	cout << "\n\n\Stack After Reverse() :\n";
	MyStack.Print();


	/////////////////3
	MyStack.UpdateItem(2, 600);
	cout << "\n\n\Stack After Updating Item(2) to 600  :\n";
	MyStack.Print();


	/////////////////4
	MyStack.InsertAfter(2, 800);
	cout << "\n\n\Stack After Inserting After Item(2) to 800 :\n";
	MyStack.Print();

	/////////////////5
	MyStack.InsertAtFront(1000);
	cout << "\n\n\Stack After Inserting 1000 At Top : \n";
	MyStack.Print();


	/////////////////6
	MyStack.InsertAtBack(2000);
	cout << "\n\n\Stack After Inserting 2000 At Bottom :\n";
	MyStack.Print();

	///////////////////7
	MyStack.Clear();
	cout << "\n\n\Stack After Clear() :\n";
	MyStack.Print();


	system("pause>0");
	return 0;
}