// posNegLinkedLists.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<process.h>
#include<iostream>
using namespace std;


class node
{
public:
	int x;
	node *next;
};

class list
{
public:
	node *head;

	list(int y = 1)
	{
		head = NULL;
		if(y == 1)
			work();
	}

	bool isEmpty()
	{
		return(head == NULL);
	}

	void append()
	{
		node *temp;
		temp = new node;
		cout << "Enter the element\n";
		cin >> temp->x;
		temp->next = NULL;
		if (isEmpty())
		{
			head = temp;
		}
		else
		{
			node *t = head;
			while (t->next != NULL)
			{
				t = t->next;
			}
			t->next = temp;
		}
		return;
	}

	void display()
	{
		if (isEmpty())
		{
			cout << "The list of numbers is empty\nPlease enter some numbers and retry\n";
		}
		else
		{
			node *t = head;
			while (t != NULL)
			{
				cout << t->x << " ";
				t = t->next;
			}
		}
		cout << endl;
		return;
	}

	void removeNegatives()
	{
		node *curr = head; //current node
		node *prev = NULL; //previous node
		node *tmp; //used to delete a node

		while (curr != NULL)
		{
			if (curr->x < 0)
			{
				if (prev != NULL)
				{
					prev->next = curr->next;
				}
				else
				{
					head = curr->next;
				}
				tmp = curr;
				curr = curr->next;
				delete tmp;
			}
			else
			{
				prev = curr;
				curr = curr->next;
			}
		}
		cout << "The negative nodes have been deleted.\n";
		cout << "The new linked list is as follows: ";
		display();
		return;
	}

	void work()
	{
		int c = 1;
		while (c != 0)
		{
			cout << "Enter 1 to append a number\nEnter 2 to display the list\nEnter 3 to remove negatives from the original list\nEnter 0 to exit\n";
			cin >> c;
			switch (c)
			{
			case 1:
				append();
				break;

			case 2:
				display();
				break;

			case 3:
				removeNegatives();
				break;

			default:
				cout << "Invalid input.\n";
				break;
			
			case 0:
				return;
			}
		}
		return;
	}
};

int main()
{
	list common;
	list pos(0); list neg(0);
    return 0;
}

