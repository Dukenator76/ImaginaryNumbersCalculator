#pragma once
#include <iostream>
using namespace std;
class ImaginaryNum
{
public:
	ImaginaryNum operator+(const ImaginaryNum &num);
	ImaginaryNum operator-(const ImaginaryNum &num);
	ImaginaryNum operator*(const ImaginaryNum &num);
	friend ostream &operator <<(ostream &, const ImaginaryNum &num);
	friend istream &operator>>(istream &, ImaginaryNum &num);
private:
	int real;
	int imaginary;
};

