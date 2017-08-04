// exceptionHandling.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;

class person
{
public:
	int age, income, vehicle;
	string city;

	person()
	{
		validAge();
	}

	void validAge()
	{
		cout << "Enter the age: ";
		try
		{
			cin >> age;
			if (age < 18 || age>55)
			{
				throw age;
			}
		}
		catch (int a)
		{
			cout << "Exceptional age!\n";
		}
		return;
	}

	void validIn()
	{
		cout << "Enter the income: ";
		try
		{
			cin >> income;
			if (income < 50000 || income>100000)
			{
				throw income;
			}
		}
		catch (int in)
		{
			cout << "Exceptional income!\n";
		}
		return;
	}

	void validVehi()
	{

	}
};

int main()
{

    return 0;
}

