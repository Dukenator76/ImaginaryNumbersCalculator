#include "pch.h"
#include <iostream>
#include "ImaginaryNum.h"

int main()
{
	ImaginaryNum num1;
	ImaginaryNum num2;
	ImaginaryNum num3;
	ImaginaryNum num4;
	ImaginaryNum num5;

	cin >> num1;
	cout << num1 << endl;
	cin >> num2;
	cout << num2 << endl;
	cout << num1 << " + " << num2 << " = ";
	num3 = num1 + num2;
	cout << num3 << endl;
	cout << num3 << " - " << num1 << " = ";
	num4 = num3 - num1;
	cout << num4 << endl;
	cout << num3 << " * " << num1 << " = ";
	num5 = num3 * num1;
	cout << num5 << endl;
	

}

