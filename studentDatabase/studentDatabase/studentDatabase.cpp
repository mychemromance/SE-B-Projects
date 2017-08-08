// studentDatabase.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;

struct student
{
	string name, dob, add, tel;
	int roll, clss;
	char div, bg;
};

class database
{
	int n;
	student *arr;

public:
	database()
	{
		cout << "Enter the number of students in the database\n";
		cin >> n;
		arr = new student[n];
	}

};

int main()
{
	database sudo;
    return 0;
}

