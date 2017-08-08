// complexOpOverload.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

class complex
{
	float re, im;

public:
	complex(float x = 0, float y = 0)
	{
		re = x;
		im = y;
	}

	complex operator + (complex);
	complex operator * (complex);
	friend istream & operator >> (istream &, complex &);
	friend ostream & operator << (ostream &, complex &);
};

istream & operator >> (istream &din, complex &b)
{
	din >> b.re;
	din >> b.im;
	return din;
}

ostream & operator << (ostream &dout, complex &b)
{
	dout << b.re << " + " << b.im << "i" << endl;
	return dout;
}

complex complex::operator + (complex a)
{
	complex res;
	res.re = re + a.re;
	res.im = im + a.im;
	return res;
}

complex complex::operator * (complex x)
{
	complex res;
	res.re = ((re * x.re) - (im * x.im));
	res.im = ((re * x.im) + (im * x.re));
	return res;
}

int main()
{
	complex a, b, c;
	cout << "Enter the first complex number:\n";
	cin >> a;
	cout << "The first complex number is: " << a;
	cout << "Enter the second complex number:\n";
	cin >> b;
	cout << "The second complex number is: " << b;
	c = a + b;
	cout << "The addition of the two complex numbers is: " << c;
	c = a*b;
	cout << "The multiplication of the two complex numbers is: " << c;
    return 0;
}