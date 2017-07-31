// posNegLinkedLists.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

class list
{
	class node
	{
	public:
		int x;
		node *next;
	};

	node *head;

public:

	list()
	{
		head = NULL;
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
			t->next = NULL;
		}
		return;
	}
};

int main()
{
    return 0;
}

