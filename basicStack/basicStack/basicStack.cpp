// basicStack.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<stack>
using namespace std;

class Stack
{
	stack <int> s;

public:

	void hello()
	{
		cout << "Implementation of a stack using STL" << endl;
		return;
	}

	void getPush()
	{
		cout << "Enter a number: ";
		int n;
		cin >> n;
		s.push(n);
	}

	void getPop()
	{
		if (s.empty())
			cout << "Stack was empty!\n";
		else
		{
			cout << "The element " << s.top() << " was popped\n";
			s.pop();
		}
		return;
	}

	void display()
	{
		if (s.empty())
			cout << "The stack is empty! Add some elements.\n";
		else
		{
			cout << "The stack is ";
			for (stack<int>dump = s; !dump.empty(); dump.pop())
			{
				cout << dump.top() << " ";
			}
			cout << endl;
		}
		return;
	}

	Stack()
	{
		hello();

		int c = 1;

		while (c != 0)
		{
			cout << endl<< "Enter..." << endl;
			cout << "1. Push an integer into the stack\n2. Pop an integer\n3. Display the stack\n0. Exit\n";
			cin >> c;
			switch (c)
			{
			case 1:
				getPush();
				break;
			case 2:
				getPop();
				break;
			case 3:
				display();
				break;
			case 0:
				break;
			default:
				cout << "Invalid input!\n";
				break;
			}
		}
	}
};
int main()
{
	Stack sudo;
    return 0;
}

