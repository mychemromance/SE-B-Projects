// infixToPostfix.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<string>
#include<stack>
using namespace std;

int getweight(char ch)
{
	switch (ch)
	{
	case '^':
		return 3;
	case '/':
		return 2;
	case '*':
		return 2;
	case '+':
		return 1;
	case '-':
		return 1;
	default:
		return 0;
	}
}

void toPostfix(string infix, char postfix[])
{
	stack<char> s;
	int w, k;
	k = 0;
	unsigned int i = 0;
	char ch;
	while (i < infix.length())
	{
		ch = infix[i];
		if (ch == '(')
		{
			s.push(ch);
			i++;
			continue;
		}
		if (ch == ')')
		{
			while ((!s.empty()) && (s.top() != '('))
			{
				postfix[k++] = s.top();
				s.pop();
			}
			if (!s.empty())
			{
				s.pop();
			}
			i++;
			continue;
		}
		w = getweight(ch);
		if (w == 0)
		{
			postfix[k] = ch;
			k++;
		}
		else
		{
			if (s.empty())
			{
				s.push(ch);
			}
			else
			{
				while (!s.empty() && s.top() != '(' && w <= getweight(s.top()))
				{
					postfix[k++] = s.top();
				}
				s.pop();
				s.push(ch);
			}
		}
		i++;
	}
	while (!s.empty())
	{
		postfix[k++] = s.top();
		s.pop();
	}
	postfix[k] = 0;
	cout << postfix << endl;
	return;
}
int main()
{
	string infix;
	char postfix[50];
	int x = 1;
	while (x == 1)
	{
		cout <<"Enter the infix expression: ";
		cin >> infix;
		cout << "The postfix expression is: ";
		toPostfix(infix, postfix);
		cout << endl << "Enter another expression? 1 or 0: ";
		cin >> x;
		cout << endl;
	}
    return 0;
}

