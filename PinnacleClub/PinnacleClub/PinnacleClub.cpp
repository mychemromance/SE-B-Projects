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
	bool clubEmpty();
	void getMember();
	void newMember();
	void newPresident();
	void newSecretary();
	void findMember();
};

member *President = NULL;
member *Secretary = NULL;

int main()
{
    return 0;
}

