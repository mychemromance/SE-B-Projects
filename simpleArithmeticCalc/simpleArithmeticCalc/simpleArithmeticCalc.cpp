// simpleArithmeticCalc.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

void arith()
{
	cout << "Enter an operation: ";
	float a, b, c;
	char op;
	cin >> a >> op >> b;
	switch (op)
	{
	case '+':
		c = a + b;
		cout << a << " + " << b << " = " << c << endl;
		break;
	case '-':
		c = a - b;
		cout << a << " - " << b << " = " << c << endl;
		break;
	case '/':
		if (b == 0)
		{
			cout << "Math error! Divisor is 0!\n";
		}
		else
		{
			c = a / b;
			cout << a << " / " << b << " = " << c << endl;
		}
		break;
	case '*':
		c = a * b;
		cout << a << " * " << b << " = " << c << endl;
		break;
	default:
		cout << "Invalid operation!\n";
	}
	cout << endl;
	return;
}

void driver()
{
	cout << "__Simple arithmetic calculator__" << endl << endl;
	int x = 1;
	while (x == 1)
	{
		arith();
		cout << "Enter 1 to continue or 0 to exit\n";
		cin >> x;
		cout << endl;
	}
	return;
}

int main()
{
	driver();
    return 0;
}

