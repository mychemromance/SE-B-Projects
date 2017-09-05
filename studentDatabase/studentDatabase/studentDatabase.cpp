// studentDatabase.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<string>
#include<iostream>
#include<stdlib.h>
using namespace std;

class student
{
	//declaring variables for individual student

private:

	string name;
	string address;
	string blood;
	int roll;
	unsigned long int phone;


public:

	static int numberOfStudents;
	static int numberOfEntries;
	
	//constructor
	student() {}

	void enterDetails()
	{
		cout << "Enter the roll number of the student: ";
		cin >> roll;
		cout << "Enter the name of the student: ";
		getline(cin, name);
		cout << "Enter the address of the student: ";
		getline(cin, address);
		cout << "Enter the blood group: ";
		getline(cin, blood);
		cout << "Enter the telephone number: ";
		cin >> phone;
		cout << endl;
		numberOfEntries++;
		return;
	}

	void displayDetails()
	{
		cout << "Student name: " << name << endl;
		cout << "Roll number: " << roll << endl;
		cout << "Address: " << address << endl;
		cout << "Phone number: " << phone << endl;
		cout << "Blood group: " << blood << endl;
		cout << endl;
		return;
	}

	string getName() { return name; }
	int getRoll() { return roll; }
	string getAddress() { return address; }
	string getBlood() { return blood; }
	unsigned long int getPhone() { return phone; }

	static void displayStudents(student s[100])
	{
		for (int i = 0; i < numberOfEntries; i++)
		{
			cout << i + 1 << ": " << endl;
			s[i].displayDetails();
		}
		return;
	}

	static int searchByRoll(student s[100], int rollNumber)
	{
		for (int i = 0; i < numberOfEntries; i++)
		{
			if (rollNumber == s[i].getRoll())
				return i;
		}
		return -1;
	}

	static int searchByName(student s[100], string n)
	{
		for (int i = 0; i < numberOfEntries; i++)
		{
			if (n == s[i].getAddress())
				return i;
		}
		return -1;
	}

	static void findRemove(student s[100])
	{
		cout << "Enter 1 to find and remove by name\nEnter 2 to find and remove by roll number\nEnter 0 to exit\n";
		int c;
		cin >> c;
		switch (c)
		{
		case 1:
			string n;
			cout << "Enter the name of the student to be removed: ";
			getline(cin, n);
			if (searchByName(s, n) == -1)
			{
				cout<<"The student was not found in the list "
			}
		}
	}
};

//initialising static members
int student::numberOfEntries = 0;
int student::numberOfStudents = 0;