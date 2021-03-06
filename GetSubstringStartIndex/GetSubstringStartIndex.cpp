#include "stdafx.h"
#include <iostream>

using namespace std;

int Match(const char *s, const char *t)
{
	char *b = (char *)s, *p, *r;
	for (s; *s != '\0'; s++)
	{
		for (p = (char *)s, r = (char *)t; *r != '\0' && *p == *r; p++, r++);

		if (*r == '\0')
		{
			return s - b;
		}
	}
	return -1;
}

int main()
{
	char *s = new char();
	char *t = new char();
	cout << "Enter your main string: ";
	cin >> s;
	cout << "Enter your potential substring: ";
	cin >> t;

	int index = Match(s, t);

	if (index == -1)
	{
		cout << "No Match Is Found" << endl;
	}
	else
	{
		cout << "Match Start at Index of " << index+1 << endl;
	}

	return 0;
}

