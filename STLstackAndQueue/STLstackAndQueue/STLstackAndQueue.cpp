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
		int t;
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
				cout << q.front << " was popped\n";
				q.pop();
			}
		}
		return;
	}

	void Stack()
	{

	}

	void Queue()
	{

	}

	STL()
	{
		cout << "Enter 's' for a stack or 'q' for a queue: ";
		cin >> choice;
		if (choice == 's')
		{
			Stack();
			if (react)
			{
				Queue();
			}
		}
		else if (choice == 'q')
		{
			Queue();
			if (react)
			{
				Stack;
			}
		}
	}

};
int main()
{
	STL sudo;
	return 0;
}

