#include"stdafx.h"
#include<iostream>
using namespace std;

struct node
{
	int x;
	node *next;
};

class lists
{
public:
	node *head, *pHead, *nHead; //head pointers for the three lists

	lists() //the default constructor
	{
		head = pHead = nHead = NULL;
		driver();
	}

	void driver();
	void append();
	void display(node *);
	//node* stripNegatives(node *);
	void sort();
	void split();
	void merge();
};

void lists::append()
{
	node *newNode = new node;
	cout << "Enter the number: ";
	cin >> newNode->x;
	newNode->next = NULL;
	if (head == NULL)
		head = newNode;
	else
	{
		node *t = head;
		while (t->next != NULL)
		{
			t = t->next;
		}
		t->next = newNode;
	}
	return;
}

void lists::display(node *h)
{
	node *t = h;
	if (t == NULL)
		cout << " is empty.\n";
	else
	{
		while (t != NULL)
		{
			cout << t->x << " ";
			t = t->next;
		}
		cout << endl;
	}
	return;
}

/*node* lists::stripNegatives(node *H)
{
	node *pos, *h = H;
	pos = NULL;
	node *newNode = new node;
	newNode->next = NULL;
	while (h != NULL)
	{
		if (h->x >= 0)
		{
			newNode->x = h->x;

			if (pos == NULL)
			{
				pos = newNode;
			}
			else
			{
				node *t = pos;
				while (t->next != NULL)
				{
					t = t->next;
				}
				t->next = newNode;
			}
		}
		h = h->next;
	}
	return pos;
}
*/

void lists::sort()
{

}

void lists::split()
{

}

void lists::merge()
{

}

void lists::driver()
{
	int con = 1;
	while (con != 0)
	{
		cout << "Enter 1 to enter numbers into the raw list\n";
		cout << "Enter 2 to display the raw list\n";
		cout << "Enter 3 to remove the negative numbers from the raw list\n";
		cout << "Enter 0 to quit\n";
		cin >> con;
		switch (con)
		{
		case 1:
			append();
			break;

		case 2:
			display(head);
			break;

		case 3:
			head = stripNegatives(head);
			break;

		case 0:
			break;

		default:
			cout << "Invalid input\n";
			break;
		}
	}
	return;
}

int main()
{
	lists l;
	return 0;
}