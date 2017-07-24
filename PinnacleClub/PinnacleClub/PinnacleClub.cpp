// PinnacleClub.cpp : Defines the entry point for the console application.
//

#include<iostream>
#include<string>
using namespace std;

class member
{
	string name;
	int prn;
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
	void displayMember();
void revDisplay(member *head);
};

//these are global variables
//Pres and Sec are analogous to head and tail node
member *Pres = NULL;
member *Sec = NULL;
int num = 0; //num stores the total number of members

bool member::noPres() //returns true is the club is empty/no President
{
	return (Pres == NULL);
}

bool member::noSec() //returns true if the tail is NULL/Secretary is missing
{
	return(Sec == NULL);
}

member* member::getMember() //returns a new member*, to be used in newMember function later
{
	member* newMem = new member;
	newMem->link = NULL;
	return newMem;
}

void member::newPresident()
{
	member *newPres = getMember();
	cout << "Enter the name of the President...\n";
	cin >> newPres->name;
	cout<<"Enter the PR number of the member...\n";
	cin>>prn;
	if (noPres())
	{
		newPres->link = Sec;
		Pres = newPres;
	}
	else
	{
		newPres->link = Pres;
		Pres = newPres;
	}
	num += 1;
	return;
}

void member::newSecretary()
{
	member* newSec = getMember();
	cout << "Enter the name of the secretary...\n";
	cin >> newSec->name;
	if (noSec())
	{
		member *temp = Pres;
		while(temp->link != NULL)
		{
			temp = temp->link;
		}
		Sec = newSec;
		temp->link = Sec;
	}
else
{
Sec->link = newSec;
Sec = newSec;
}
num+=1;
return;
}

void member::newMember()
{
if(noPres())
{
cout<<"The club is empty.";
return;
}
member *newM = getMember();
cout<<"Enter the name of the new member: ";
cin>>newM->name;
member *t = Pres;
t = t->link;
newM->link = t;
Pres->link = newM;
num+=1;
return;
}

void member::findMember()
{
string n;
cout<<"Enter the member you wish to find: ";
cin>>n;
member *t = Pres;
int y = 1;
while(t != NULL)
{
if(t->name == n)
{
if(t == Pres)
{
cout<<"The member "<<n<<" is the President\n";
}
else if(t == Sec)
{
cout<<"The member "<<n<<" is the Secretary\n";
}
else
{
cout<<"The member was found at the "<<y<<"position"<<endl;
}
break;
}
y+=1;
t=t->link;
}
}

void member::mem()
{
	if (noPres())
	{
		cout << "The club was empty, now creating a President...\n";
		newPresident();
	}
	if (noSec())
	{
		cout << "The club was missing a Secretary, elect one....\n";
		newSecretary();
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
return;
}

void member::displayMember()
{
member *temp = Pres;
if(noPres())
{
cout<<"The club is empty... Add some members\n";
return;
}
while(temp!=NULL)
{
if(temp == Pres)
{
cout<<"The President: "<<temp->name<<endl;
}
else if(temp == Sec)
{
cout<<"The Secretary: "<<temp->name<<endl;
}
else
{
cout<<temp->name<<endl;
}
temp = temp->link;
}
cout<<endl;
return;
}

void member::revDisplay(member *head)
{
if (head == NULL)
	return;

revDisplay(head->link);
cout<<head->name<<endl;
}


int main()
{
Pres->mem();
int c;
for(; ;)
{
cout<<"Enter 1 to add a member to the club\nEnter 2 to display the club\nEnter 3 to find a member\nEnter 4 to display the club in the reverse order\nEnter 0 to quit\n";
cin>>c;
switch(c)
{
case 0:
{
return 0;
}
case 1:
{
Pres->mem();
break;
}
case 2:
{
Pres->displayMember();
break;
}
case 3:
{
Pres->findMember();
break;
}
case 4:
{
Pres->revDisplay(Pres);
break;
}
default:
{
cout<<"Invalid input\n";
break;
}
}
}
return 0;
}
