#pragma once
#include <iostream>
#include<stack>


using namespace std;


class clsMyString
{
	
protected :

	string _Value;
	stack <string> _Undo;   // To Reverse
	stack <string> _Redo;    // To Front


public :

	void Set(string Value)
	{
		_Undo.push(_Value);
		_Value = Value;
	
	}

	string Get()
	{
		return _Value;
	}

	// Properity Set & Get
	 __declspec(property(get = Get, put = Set)) string Value;

	 void Undo()
	 {
		 if (!_Undo.empty())
		 {
			 _Redo.push(_Value);
			 _Value = _Undo.top();

			 _Undo.pop();
		 }
		
	 }

	 void Redo()
	 {
		 if (!_Redo.empty())
		 {
			 _Undo.push(_Value);
			 _Value = _Redo.top();

			 _Redo.pop();
		 }

	 }

};

