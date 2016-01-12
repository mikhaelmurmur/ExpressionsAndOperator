// Task2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	int a, b, c, d, x, i;
	a = ((b + (c*d)) << 2) & 8;
	(a & 077) != 3;
	(a == b) || ((a == c) && (c < 5));
	c = (x != 0);
	(0 <= i) < 7;
	//a = -1++ b--5; ambiguity
	a = (b == c++);
	a - b, c - d;
	return 0;
}

