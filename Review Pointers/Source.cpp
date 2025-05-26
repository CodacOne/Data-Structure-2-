#include <iostream>


using namespace std;


int main()

{
	int arr[5] = { 10,20,30,40,50 };

	int* ptr;

	ptr = arr;


	cout << ptr << endl;
	cout << ptr+1 << endl;
	cout << ptr+2 << endl;
	cout << ptr+3 << endl;
	cout << ptr+4 << endl;

	cout << "Value of pointers \n\n";


	cout << *ptr << endl;
	cout << *(ptr + 1 )<< endl;
	cout << *(ptr + 2 )<< endl;
	cout << *( ptr + 3) << endl;
	cout << *(ptr + 4 )<< endl;

	system("pause>0");

	return 0;
}