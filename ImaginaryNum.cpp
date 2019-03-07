#include "pch.h"
#include "ImaginaryNum.h"
#include <iomanip>
#include <iostream>

using namespace std;



ImaginaryNum  ImaginaryNum::operator+(const ImaginaryNum &num) {
	ImaginaryNum temp;
	temp.real = real + num.real;
	temp.imaginary = imaginary + num.imaginary;

	return temp;
}
ImaginaryNum  ImaginaryNum::operator-(const ImaginaryNum &num) {
	ImaginaryNum temp;
	temp.real = real - num.real;
	temp.imaginary = imaginary - num.imaginary;

	return temp;
}
ImaginaryNum ImaginaryNum::operator*(const ImaginaryNum &num) {
	ImaginaryNum temp;
	temp.real = real * num.real;
	temp.imaginary = imaginary * num.imaginary;
	temp.real = temp.real - temp.imaginary;
	temp.imaginary = 0;

	return temp;
}
ostream &operator <<(ostream &output, const ImaginaryNum &num) {
	if (num.imaginary == 0) {
		output << num.real;
	}
	else {
		output << num.real << " + " << num.imaginary << "i ";
	}
	return output;
}
istream &operator>>(istream &input, ImaginaryNum &num) {
	cout << "Please enter like example: real(for single digit enter 0 before number no more than2 digits), imaginary(for single digit enter 0 before number no more than2 digits) " << endl;
	cout << "Example: 06, 05" << endl;
	input >> setw(2) >> num.real;
	input.ignore(2);// skips , and space
	input >> setw(2) >> num.imaginary;
	return input;
 }