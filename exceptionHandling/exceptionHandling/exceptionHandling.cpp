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
		validIn();
		validVehi();
		validCity();
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
		cout << "Enter; 2 for a two-Wheeler, 4 for a four-wheeler, 0 if none: ";
		try
		{
			cin >> vehicle;
			if (vehicle != 4)
				throw vehicle;
		}
		catch (int v)
		{
			cout << "Exceptional vehicle!\n";
		}
		return;
	}

	void validCity()
	{
		cout << "Enter the name of the city: ";
		try
		{
			cin >> city;
			if (city != "Pune")
				throw city;
		}
		catch (string c)
		{
			cout << "Exceptional city!\n";
		}
		return;
	}
};

int main()
{
	person sudo;
    return 0;
}

