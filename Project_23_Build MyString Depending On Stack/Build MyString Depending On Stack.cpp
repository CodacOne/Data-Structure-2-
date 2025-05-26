#include <iostream>
#include"clsMyString.h"

using namespace std;

int main()
{
	cout << "\n\n\n\t\t\t\t\t Undo/Redo Project :\n\n";

	clsMyString  S1;

	cout << " S1 = " << S1.Value << endl;
	
	//////////////
	S1.Value = "Abd";
	cout << " S1 = " << S1.Value << endl;

	S1.Value = "Abd2";
	cout << " S1 = " << S1.Value << endl;

	S1.Value = "Abd3";
	cout << " S1 = " << S1.Value << endl;


	//////////////
	
	cout << "\n\n--------------Undo------------\n\n";
	cout << "\n" << S1.Value;
	S1.Undo();
	
	cout << "\n" << S1.Value;
	S1.Undo();
	
	cout << "\n" << S1.Value;
	S1.Undo();
	

	//////////////

	cout << "\n\n--------------Redo------------\n\n";
	S1.Redo();
	cout << "\n" << S1.Value;

	S1.Redo();
	cout << "\n" << S1.Value;

	S1.Redo();
	cout << "\n" << S1.Value;
	return 0;
}