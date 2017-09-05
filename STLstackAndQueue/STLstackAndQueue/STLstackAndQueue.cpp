// STLstackAndQueue.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<stack>
#include<queue>
using namespace std;

class STL
{
	stack <int> s;
	queue <int> q;
	char choice;
	bool react;

public:

	void hello()
	{
		cout << "Implementation of a stack and a queue using STL" << endl;
		return;
	}

	void Push(int x)
	{
		int t;
		cout << "Enter the integer to be pushed: ";
		cin >> t;
		if (x == 1)
		{
			s.push(t);
		}
		else if(x == 2)
		{
			q.push(t);
		}
		return;
	}

	void Pop(int x)
	{
		if (x == 1)
		{
			if (s.empty())
				cout << "The stack was empty!\n";
			else
			{
				cout << s.top() << " was popped\n";
				s.pop();
			}
		}
		else if (x == 2)
		{

			if (q.empty())
				cout << "The queue was empty!\n";
			else
			{
				cout << q.front() << " was popped\n";
				q.pop();
			}
		}
		return;
	}

	void Display(int x)
	{
		if (x == 1)
		{
			for (stack <int> dummy = s; !dummy.empty(); dummy.pop())
			{
				cout << dummy.top() << " ";
			}
			cout << endl;
		}
		else
		{
			{
				for (queue <int> dummy = q; !dummy.empty(); dummy.pop())
				{
					cout << dummy.front() << " ";
				}
				cout << endl;
			}
		}
		return;
	}

	void Stack()
	{
		react = false;
		cout << "Implementation of a stack: \n";
		int c = 1;
		while (c != 0)
		{
			cout << "1. Push an element\n2. Pop an element\n3. Display the stack\n0. Return to queue\n9. Quit\n";
			cin >> c;
			switch (c)
			{
			case 1:
				Push(1);
				break;
			case 2:
				Pop(1);
				break;
			case 3:
				Display(1);
				break;
			case 0:
				react = true;
				break;
			case 9:
				return;
			default:
				cout << "Invalid input!\n";
				break;
			}
		}
		if (react)
		{
			Queue();
		}
		return;
	}

	void Queue()
	{
		react = false;
		cout << "Implementation of a queue: \n";
		int c = 1;
		while (c != 0)
		{
			cout << "1. Push an element\n2. Pop an element\n3. Display the queue\n0. Return to stack\n9. Quit\n";
			cin >> c;
			switch (c)
			{
			case 1:
				Push(2);
				break;
			case 2:
				Pop(2);
				break;
			case 3:
				Display(2);
				break;
			case 0:
				react = true;
				return;
			default:
				cout << "Invalid input!\n";
				break;
			}
		}
		if (react)
		{
			Stack();
		}
		return;
	}

	STL()
	{
		cout << "Enter 's' for a stack or 'q' for a queue: ";
		cin >> choice;
		if (choice == 's' )
		{
			Stack();
		}
		else if (choice == 'q')
		{
			Queue();
			if (react)
			{
				Stack();
			}
		}
	}

};
int main()
{
	STL sudo;
	return 0;
}

