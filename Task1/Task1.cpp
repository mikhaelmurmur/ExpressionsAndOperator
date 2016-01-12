// Task1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <xstring>

using namespace std;
int main()
{
	const int max_length = 10;
	int i = 0;
	string input_line;
	int quest_count = 0;
	for (i = 0; i < max_length; i++)
	{
		if (input_line[i] == '?') quest_count++;
	}
	i = 0;
	while (i < max_length)
	{
		if (input_line[i] == '?') quest_count++;
		i++;
	}

	const char *p = input_line.c_str();
	i = 0;
	while (i < max_length)
	{
		if (*p++ == '?') quest_count++;
		p++;
		i++;
	}
	return 0;
}

