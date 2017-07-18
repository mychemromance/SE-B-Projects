// PinnacleClub.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

class member
{
	string name;
	member *link;

public:
	bool noPres();
	bool noSec();
	member* getMember();
	void mem();
	void newPresident();
	void newSecretary();
	void newMember();
	void findMember();
};

//these are global variables
//Pres and Sec are analogous to heada and tail node
member *Pres = NULL;
member *Sec = NULL;
int num = 0; //num stores the total number of members

//returns true is the club is empty/no President
bool member::noPres()
{
	return (Pres == NULL);
}

//returns true if the tail is NULL/Secretary is missing
bool member::noSec()
{
	return(Sec == NULL);
}

//returns a new member*, to be used in newMember function later
member* member::getMember()
{
	member* newMem = new member;
	newMem->link = NULL;
	return newMem;
}

void member::mem()
{
	if (noPres())
	{
		cout << "The club was empty, now creating a President...\n";
		newPresident();
		return;
	}
	else
	{
		cout << "Enter 1 to elect a new President\n";
		cout << "Enter 2 to elect a new Secretary\n";
		cout << "Enter 3 to add a new member to the club\n";
		int c;
		cin >> c;
		switch (c)
		{
		case 1:
		{
			newPresident();
			break;
		}
		case 2:
		{
			newSecretary();
			break;
		}
		case 3:
		{
			newMember();
			break;
		}
		default:
		{
			cout << "Invalid input\n";
			break;
		}
		}
	}
}

int main()
{

}

