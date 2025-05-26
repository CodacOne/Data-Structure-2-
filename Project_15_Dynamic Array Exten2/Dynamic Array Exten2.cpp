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

	MyDynamicArray.Reverse();

	 cout << "\n\nArray Items After Reverse  : \n\n";
	MyDynamicArray.Print();

	////////////////////////////
	MyDynamicArray.Clear();
	cout << "\n\nArray Items After Clear()  : \n\n";
	MyDynamicArray.Print();

	system("pause>0");
	return 0;


}