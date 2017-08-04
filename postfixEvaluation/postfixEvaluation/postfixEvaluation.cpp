// postfixEvaluation.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<stack>
#include<string>
#include<math.h>
using namespace std;

void postfixEvaluate(string s)
{
	stack<char> st;
	char t, op1, op2;
	int i = 0, val, res;
	t = s[i];
	bool opnd; //true if operand, false if operator
	while (t != '\0')
	{
		if (t >= '0' && t <= '9')
			opnd = true;
		else if (t == '+' || t == '-' || t == '*' || t == '/')
			opnd = false;
		if (opnd)
		{
			val = t - 48;
			st.push(val);
		}
		else if (!opnd)
		{
			op2 = st.top();
			st.pop();
			op1 = st.top();
			st.pop();
			switch (t)
			{
			case '+':
				res = op1 + op2;
				break;

			case '-':
				res = op1 - op2;
				break;

			case '*':
				res = op1 * op2;
				break;

			case '/':
				res = op1 / op2;
				break;

			case '^':
				res = pow(op1, op2);
				break;
			}
			st.push(res);
		}
		i += 1;
		t = s[i];
	}
	cout << "The result is " << res << endl;
	return;
}

int main()
{
	int con = 1;
	string x;
	while (con)
	{
		cout << "Enter an expression:\n";
		cin >> x;
		postfixEvaluate(x);
		cout << "Evaluate another expression? 1 or 0: ";
		cin >> con;
	}
    return 0;
}

