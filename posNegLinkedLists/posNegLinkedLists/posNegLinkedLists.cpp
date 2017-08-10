#include"stdafx.h"
#include<iostream>
#define null NULL
using namespace std;

struct node
{
	float x;
	node *next;
};

class list
{
public:

	node *h, *p, *n, *s; //head pointers for the raw, positive, negative and the sorted lists

	list()
	{
		int y = 1;
		while (y != 0)
		{
			cout << "Enter 1 to insert a number into the raw list\nEnter 2 to display the lists\nEnter 3 to remove negatives from the raw list\n";
			cout << "Enter 4 to sort the raw list\nEnter 5 to split the list\nEnter 6 to merge the lists\n";
			cin >> y;
			switch (y)
			{
			case 1:
				rawAppend();
				break;
			case 2:
				display(h);
				break;
			case 3:
				removeNeg();
				break;
			case 4:
				sort();
				break;
			case 5:
				split();
				break;
			case 6:
				merge();
				break;
			case 0:
				break;
			default:
				cout << "Invalid input.\n";
				break;
			}
		}
	}

	void rawAppend()
	{
		//appends an element to the raw list
		node *newnode = new node;
		newnode->next = null;
		cout << "Enter the element: ";
		cin >> newnode->x;
		if (h == null)
		{
			h = newnode;
		}
		else
		{
			newnode->next = h;
			h = newnode;
		}
		return;
	}

	void signedAppend(int sign, float num)
	{
		//appends an element to the list specified by the sign variable
		node *newnode = new node;
		newnode->x = num;
		newnode->next = null;
		if (sign == 1) //append to the positive list
		{
			if (p == null)
			{
				p = newnode;
			}
			else
			{
				newnode->next = p;
				p = newnode;
			}
		}
		else if (sign == -1) //append to the negative list
		{
			if (n == null)
			{
				n = newnode;
			}
			else
			{
				newnode->next = n;
				n = newnode;
			}
		}
		else if (sign == 0)
		{
			if (s == null)
			{
				s = newnode;
			}
			else
			{
				node *t = s;
				while (t->next != null)
				{
					t = t->next;
				}
				t->next = newnode;
			}
		}
		return;
	}

	void sort()
	{

	}

	void split()
	{
		node *t = h;
		while (t != null)
		{
			if (t->x >= 0)
			{
				signedAppend(1, t->x);
			}
			else
			{
				signedAppend(-1, t->x);
			}
			t = t->next;
		}
		cout << "the lists have been split into positives and negatives.\n";
		cout << "The positive list is: ";
		display(p);
		cout << "The negative list is: ";
		display(n);
		return;
	}

	void merge()
	{
		h = n;
		node *t = h;
		while(t->next != null)
		{
			t = t->next;
		}
		t->next = p;
		return;
	}

	void removeNeg()
	{
		node *t = h;
		while (t != null)
		{
			if (t->x >= 0)
			{
				signedAppend(1, t->x);
			}
			t = t->next;
		}
		h = p;
		return;
	}

	void display(node **t)
	{
		if (t == null)
			cout << " empty.\n";
		else
		{
			while (t != null)
			{
				cout << t->x << " ";
				t = t->next;
			}
			cout << endl;
		}
		return;
	}
};
int main()
{
	list x;
	return 0;
}