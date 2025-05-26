#include<iostream>
#include"clsDynamicArray.h"


using namespace std;

int main()
{
	clsDynamicArray <int> MyDynamicArray(5);

	/////////////////////////////
	MyDynamicArray.setItem(0, 10);
	MyDynamicArray.setItem(1, 20);
	MyDynamicArray.setItem(2, 30);
	MyDynamicArray.setItem(3, 40);
	MyDynamicArray.setItem(4, 50);

	/////////////////////////////
	cout << "\nIs Empty ? " << MyDynamicArray.IsEmpty();
	cout << "\nArray Size : " << MyDynamicArray.size();
	cout << "\n\nArray Items : \n\n";

	/////////////////////////////
	MyDynamicArray.Print();

	/////////////////////////////


	//MyDynamicArray.Resize(2);
	//cout << "//////////////////////////\n";
	///////////////////////////////
	//cout << "\nArray Size : " << MyDynamicArray.size();
	//cout << "\n\nArray Items After Resize To 2 : \n\n";
	//MyDynamicArray.Print();


	//cout << "//////////////////////////\n";
	///////////////////////////////
	//MyDynamicArray.Resize(10);
	//cout << "\nArray Size : " << MyDynamicArray.size();
	//cout << "\n\nArray Items After Resize To 10 : \n\n";
	//MyDynamicArray.Print();

	////////////////////////////
	cout << "\nItem(2) : " << MyDynamicArray.GetItem(2) << endl;

	//////////////////////////////
	//MyDynamicArray.Reverse();
	//cout << "\n\nArray Items After Reverse  : \n\n";
	//MyDynamicArray.Print();

	//////////////////////////////
	//MyDynamicArray.Clear();
	//cout << "\n\nArray Items After Clear()  : \n\n";
	//MyDynamicArray.Print();


	//////////////////////////////
	//MyDynamicArray.DeleteItemAt(2);
	//cout << "\n\nArray Items After Delete Item(2)  : \n\n";
	//MyDynamicArray.Print();

	//////////////////////////////
	//MyDynamicArray.DeleteFirstItem();
	//cout << "\n\nArray Items After Deleting First Item : \n\n";
	//MyDynamicArray.Print();

	//////////////////////////////
	//MyDynamicArray.DeleteLastItem();
	//cout << "\n\nArray Items After Deleting Last Item : \n\n";
	//MyDynamicArray.Print();

	int Index = MyDynamicArray.Find(30);

	if (Index==-1)
	{
		cout << "\n\nItem was Not found -(\n";

	}

	else
		cout << "\n\nItem it found at Index  : "<< Index<<endl;



	//////////////////////////////
	MyDynamicArray.DeleteItem(30);
	cout << "\n\nArray Items After Deleting 30 : \n\n";
	cout << "\nArray Size : " << MyDynamicArray.size() << "\n\n";
	MyDynamicArray.Print();


	system("pause>0");
	return 0;


}